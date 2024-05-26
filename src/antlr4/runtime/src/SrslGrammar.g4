grammar SrslGrammar;
WS: [ \t\r\n]+ -> skip;
COMMENT: ('//' ~('\n'|'\r')* '\r'? '\n' |   '/*' (.)*? '*/') -> skip ;

file:
    shaderTypeSpec (statement)*;

shaderTypeSpec:
    SHADER_TYPE_LIT SHADER_TYPE EOL;

statement:
    newVariable EOL |
    assignment EOL |
    expression EOL |
    controlFlow EOL |
    forStatement |
    whileStatement |
    ifStatement |
    returnStatement EOL |
    functionDeclaration |
    functionCall EOL |
    structDeclaration EOL |
    samplerDeclaration EOL |
    textureDeclaration EOL |
    shaderInput EOL |
    shaderOutput EOL |
    constantBufferDeclaration EOL;

forStatement : FOR PARENO statement expression EOL expression PARENC scope;
whileStatement: WHILE PARENO expression PARENC scope;
ifStatement: IF PARENO expression PARENC scope optionalStatement?;
optionalStatement: elseStatement | elseIfStatement;
elseIfStatement: ELSE IF PARENO expression PARENC scope optionalStatement?;
elseStatement: ELSE scope;

textureDeclaration: TEXTURE_TYPES PARENO SLOT ASSIGN NUMBER PARENC VAR_NAME;
samplerDeclaration: SAMPLER_TYPE PARENO SLOT ASSIGN NUMBER PARENC VAR_NAME;
constantBufferDeclaration: CONSTANT_BUFFER PARENO SLOT ASSIGN NUMBER PARENC VAR_NAME CBRACKO (newVariable EOL)* CBRACKC;
shaderInput: SHADER_INPUT VAR_NAME CBRACKO (newVariable COLON VAR_NAME EOL)* CBRACKC;
shaderOutput: SHADER_OUTPUT VAR_NAME CBRACKO (newVariable COLON VAR_NAME EOL)* CBRACKC;

functionDeclaration: CONST* (TYPE | VAR_NAME) VAR_NAME PARENO (newVariable (COMMA newVariable)*)? PARENC (scope | EOL);
functionCall: VAR_NAME PARENO (expression (COMMA expression)*)? PARENC;
returnStatement: RETURN expression?;

scope: CBRACKO statement* CBRACKC;

structDeclaration: STRUCT VAR_NAME CBRACKO (newVariable EOL)* CBRACKC;

assignment: lvalue (ASSIGN | ASSIGN_OP) expression;

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

newVariable: CONST* (TYPE | VAR_NAME) VAR_NAME (SBRACKO NUMBER SBRACKC)*;
variable:  VAR_NAME (SBRACKO expression SBRACKC)*;
constant: NUMBER | FLOATING_POINT | BOOL;
controlFlow: CONTROL_FLOW;
typeConstructor: TYPE PARENO expression (COMMA expression)* PARENC;
initializerList: CBRACKO (expression (COMMA expression)*)? CBRACKC;


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
RETURN: 'return';
CONTROL_FLOW: 'continue' | 'break' | 'discard';
STRUCT: 'struct';
SHADER_INPUT: 'Input';
SHADER_OUTPUT: 'Output';

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

SAMPLER_TYPE: 'Sampler';

CONSTANT_BUFFER: 'ConstantBuffer';

SLOT: 'slot';

SHADER_TYPE_LIT: 'ShaderType = ';
SHADER_TYPE: 'Vertex' | 'Fragment';

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
ASSIGN_OP: '+=' | '-=' | '*=' | '/=' | '%=' | '<<=' | '>>=' | '&=' | '|=' | '^=';
OPERATION: '%' | '==' | '!=' | '>' | '<' | '>=' | '<=' | '&&' | '||' | '<<' | '>>' | '&' | '|' | '^';
CREMENT: '++' | '--';
NOT: '!';
BOOL: 'true' | 'false';

VAR_NAME: [a-zA-Z_][a-zA-Z0-9_]*;