grammar SrslGrammar;
WS: [ \t\r\n]+ -> skip;

file:
    shaderTypeSpec ( multilineComment | singlelinecomment | statement)*;

shaderTypeSpec:
    SHADER_TYPE_LIT SHADER_TYPE EOL;

multilineComment : MCOMMENT;
singlelinecomment : COMMENT;

statement:
    lvalue EOL |
    assignment EOL |
    expression EOL |
    controlFlow EOL |
    forLoop |
    whileLoop |
    ifStatement |
    returnStatement EOL |
    functionDeclaration |
    functionCall EOL |
    structDeclaration EOL |
    samplerDeclaration EOL |
    textureDeclaration EOL |
    shaderInterface EOL |
    constantBufferDeclaration EOL;

forLoop: FOR PARENO statement expression EOL expression PARENC scope;
whileLoop: WHILE PARENO expression PARENC scope;
ifStatement: IF PARENO expression PARENC scope optionalStatement?;
optionalStatement: elseStatement | elseIfStatement;
elseIfStatement: ELSE IF PARENO expression PARENC scope optionalStatement?;
elseStatement: ELSE scope;

textureDeclaration: TEXTURE_TYPES PARENO SLOT ASSIGN NUMBER PARENC VAR_NAME;
samplerDeclaration: SAMPLER_TYPE PARENO SLOT ASSIGN NUMBER PARENC VAR_NAME;
constantBufferDeclaration: CONSTANT_BUFFER PARENO SLOT ASSIGN NUMBER PARENC VAR_NAME CBRACKO (newVariable EOL)* CBRACKC;
shaderInterface: (SHADER_INPUT | SHADER_OUTPUT) VAR_NAME CBRACKO (newVariable EOL)* CBRACKC;

functionDeclaration: testCase* CONST* (TYPE | VAR_NAME) VAR_NAME PARENO (newVariable (COMMA newVariable)*)? PARENC (COLON VAR_NAME)? (scope | EOL);
functionCall: VAR_NAME PARENO (expression (COMMA expression)*)? PARENC;
returnStatement: RETURN expression;

scope: CBRACKO statement* CBRACKC;

structDeclaration: STRUCT VAR_NAME CBRACKO (newVariable EOL)* CBRACKC;

testCase: AT TEST VAR_NAME CBRACKO (expression COMMA)* OPERATION COMMA expression CBRACKC;

assignment: lvalue ASSIGN expression;

expression:
    expression (MULTIPLY |
    DIVIDE) expression |
    expression (PLUS |
    MINUS) expression |
    expression OPERATION expression |
    PARENO expression PARENC |
    CREMENT expression |
    expression CREMENT |
    NOT expression |
    MINUS expression |
    rvalue;

initializerList: CBRACKO (expression (COMMA expression)*)? CBRACKC;


lvalue:
    newVariable |
    variable |
    memberAccess;

rvalue:
    variable |
    constant |
    functionCall |
    typeConstructor |
    memberAccess |
    initializerList;

memberAccess: (variable | functionCall) DOT ( variable | memberAccess);

newVariable: CONST* (TYPE | VAR_NAME) VAR_NAME (SBRACKO NUMBER SBRACKC)* (COLON VAR_NAME)?;
variable:  VAR_NAME (SBRACKO expression SBRACKC)*;
constant: NUMBER | FLOATING_POINT;
controlFlow: CONTROL_FLOW;
typeConstructor: TYPE PARENO expression (COMMA expression)* PARENC;


// brackets
SBRACKO: '[';
SBRACKC: ']';
CBRACKO: '{';
CBRACKC: '}';
PARENO: '(';
PARENC: ')';

// Keywords
CONST: 'const';
FOR: 'for';
WHILE: 'while';
IF: 'if';
ELSE: 'else';
ELSEIF: 'else if';
RETURN: 'return';
CONTROL_FLOW: 'continue' | 'break' | 'discard';
STRUCT: 'struct';
SHADER_INPUT: 'Input';
SHADER_OUTPUT: 'Output';
TEST: 'test';

// types
TYPE:
    'void' |
    'bool' [1-4]? ('x'[1-4])? |
    'int' [1-4]? ('x'[1-4])? |
    'uint' [1-4]? ('x'[1-4])? |
    'half' [1-4]? ('x'[1-4])? |
    'float' [1-4]? ('x'[1-4])? |
    'double' [1-4]? ('x'[1-4])?;

TEXTURE_TYPES:
    'Texture1D' | 'Texture2D' | 'Texture3D' | 'TextureCube'|
    'Texture1DArray' | 'Texture2DArray' | 'Texture3DArray' | 'TextureCubeArray';

SAMPLER_TYPE:
    'Sampler';

CONSTANT_BUFFER:
    'ConstantBuffer';

SLOT:
    'slot';

//comments
COMMENT : '//' ~[\n]* [\n];
MCOMMENT : '/*' (~[\n]* [\n] '*')* (~[\n]* [\n])? '*/';

SHADER_TYPE_LIT: 'ShaderType = ';
SHADER_TYPE: 'Vertex' | 'Fragment' | 'Geometry' | 'TesselationControl' | 'TesselationEvalutation';

EOL : ';';
COMMA: ',';
COLON: ':';

FLOATING_POINT : ([1-9][0-9]*)?[0-9] '.' [0-9]* 'f'?;
NUMBER:  '0' | [1-9][0-9]*;

ASSIGN: '=';
DOT: '.';
AT: '@';

PLUS: '+';
MINUS: '-';
MULTIPLY: '*';
DIVIDE: '/';
OPERATION: '%' | '==' | '!=' | '>' | '<' | '>=' | '<=' | '&&' | '||' | '<<' | '>>' | '&' | '|' | '^';
CREMENT: '++' | '--';
NOT: '!';

VAR_NAME: [a-zA-Z_][a-zA-Z0-9_]*;