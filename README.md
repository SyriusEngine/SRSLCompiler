# SRSL Compiler
IMPROVED VERSION OF THE SRSL COMPILER, HEAVILY BASED ON THE ORIGINAL VERSION. THE ORIGINAL VERSION CAN BE FOUND [HERE](
https://github.com/SyriusEngine/SyriusShadingLanguage)
## Introduction
The SRSL compiler is a compiler tool designed to convert the SRSL language to GLSL or HLSL. The compiler tool itself is 
written in C++ and is designed to be used as a library inside other projects. Mostly projects that are using multiple
graphics APIs and want to use the same shader code for all of them. The SRSL language is a custom language that should 
be easy to learn if you are familiar with GLSL or HLSL. The input of the compiler are two .srsl files, one for the vertex
shader and one for the fragment shader. The output of the compiler are two files that contain GLSL or HLSL code.

## Motivation
Most application that want to leverage the power of the GPU and want to be supported on multiple platforms, need to support
multiple graphics APIs. This is because different platforms support different graphics APIs. For example, Windows supports
DirectX and Linux supports Vulkan (you can use OpenGL on both platforms but this one comes with its own problems). This
means that if you want to support both platforms, you need to support both APIs. As each API has its own shading language,
this means that you need to write two different shaders for each shader you want to use. This is a form of code duplication
as both implementations would execute the same logic, only the syntax is different. Also maintaining two different shader
implementations can be a lot of work. If a bug were to be found in one of the shaders, it would need to be fixed in both
implementations. This is where the SRSL compiler comes in. It allows you to write one shader and compile it to both GLSL
and HLSL. This way, you only need to maintain one shader implementation and you can use it on multiple platforms.

As similar projects already exists (such as using the SPIRV intermediate representation), why create another one? The
SRSL language is a domain specific language that is designed to be used for 3D rendering while still providing low
level control. Also, the SRSL language should provide more validation steps as well as a validation context. This context
can be used to verify that the resources used by the shader (GPU) are created correctly by the CPU. For example, if a
constant buffer is declared with a size N, then the validation context can be used to verify that the constant buffer
created by the CPU has indeed a size of N.

## Features
Currently, the SRSL compiler supports the following features:
* Basic types: int, float, bool, vec2, vec3, vec4, mat2, mat3, mat4
* Arrays
* Structs
* Functions
* if/else statements
* for and while loops
* break, continue and discard statements
* Constant buffers
* Textures and Samplers
As this project is developed individually, only the vertex shader and fragment shader are supported (for now).
Also small bugs may still occur.

## Supported platforms
### Requirements
* A C++17 compiler, such as MSVC 2019 or GCC 9.3.0.
* A CMake build system with a version >= 3.16

### Dependencies
* ANTLR4
* ANTLR4 C++ runtime

The only library that the project depends on is ANTLR4. This library is used to generate the lexer and parser for the
SRSL language. The ANTLR4 C++ runtime is also required to build the project. The ANTLR4 C++ runtime is included for: 
* Windows (x64)
### OS
* Windows (x64) (ANTLR4 binaries provided, also tested)
* Linux (x64) (ANTLR4 binaries are not provided, not tested)

## Installation
Building the project is done using CMake. The commands can be used to build the project:
```
mkdir build
cd build
cmake ..
cmake .
```
A dynamic library (DLL on windows, SO on Linux)will be created in the build folder. This library can be linked to other
projects. 

## Usage
### Setup
The repository has an 'include' folder that contains the header files of the SRSL compiler. These must be included
in your project.
#### 1. Create the necessary shader modules
A shader module confines a single shader stage, such a vertex shader module or a fragment shader module. The shader
module is created by calling the 'createShaderModule' function. This function takes a string as input that contains
the SRSL code.
```cpp
auto vsm = Srsl::createShaderModule();
vsm->exportAstDot("VSM.dot");
vsm->exportSymbolTableHtml("VSM.html");

auto fsm = Srsl::createShaderModule();
fsm->exportAstDot("FSM.dot");
fsm->exportSymbolTableHtml("FSM.html");
```
This piece of code creates two shader modules, one for the vertex shader and one for the fragment shader. The
shader module internally contains the symbol table and abstract syntax tree information for the given shader stage.
This information can be exported to a dot file or html file. The dot file can be used to generate a visual representation
of the abstract syntax tree. The html file can be used to view the symbol table information. 

#### 2. Create the shader program
A shader program is used to describe all shader stages used in a single pipeline pass. Minimally, a shader program
must contain a vertex shader module and a fragment shader module. The shader program is created by calling the
'createShaderProgram' function. This function takes a vertex shader module and a fragment shader module as input.
```cpp
ShaderLimits limits;
auto program = Srsl::createShaderProgram(limits); // limits is optional
program->addShaderModule(vsm);
program->addShaderModule(fsm);
program->link();
```
This piece of code creates a shader program and adds the previously created shader modules to it. The shader program
will verify that given modules are compatible with each other. If this is not the case, an exception will be thrown.
If the modules are compatible, the shader program will link the modules together. This will create a single shader
program that can be used to generate GLSL or HLSL code.

#### 3. Generate GLSL or HLSL code
The shader program can be used to generate GLSL or HLSL code. This is done by calling the 'exportGlsl' or 'exportHlsl'
function which is a member function of the shader program. These functions take in a struct as an input that contains
the output filename and some other information as well. In case of GLSL, the struct contains the version of GLSL that
should be generated. In case of HLSL, the struct contains the shader model that should be generated.
```cpp
ExportDesc exportGlsl;
exportGlsl.vertexShaderOut = "./Dev-vs.glsl";
exportGlsl.fragmentShaderOut = "./Dev-fs.glsl";
exportGlsl.writeType = SRSL_WRITE_TO_FILE;
exportGlsl.target = SRSL_TARGET_GLSL;
exportGlsl.version.majorVersion = 4;
exportGlsl.version.minorVersion = 6;

ExportDesc exportHlsl;
exportHlsl.vertexShaderOut = "./Dev-vs.hlsl";
exportHlsl.fragmentShaderOut = "./Dev-fs.hlsl";
exportHlsl.writeType = SRSL_WRITE_TO_FILE;
exportHlsl.target = SRSL_TARGET_HLSL;
exportHlsl.version.majorVersion = 5;
exportHlsl.version.minorVersion = 0;

program->exportGlsl(glslDesc);
program->exportHlsl(hlslDesc);
```
This should now produce 2 files, one with the vertex shader and one with the fragment shader. These files can be used
in your project.

### Example
This section contains a basic example for the SRSL language.
```srsl
ShaderType = Vertex;

Input vsIn{
    float3 position: Position;
    float2 texCoords: TexCoords;
};

Output vsOut{
    float4 position: SRV_POSITION;
    float2 texCoords: TexCoords;
};

void main(){
    vsOut.position = float4(vsIn.position, 1.0);
    vsOut.texCoords = vsIn.texCoords;
}
```
This is a basic vertex shader that takes in a position and texture coordinates and outputs a position and texture
coordinates. The shader type is specified at the top of the file. This is required as the SRSL compiler needs to know
which shader stage it is compiling. The input and output interfaces are used to describe the input and output of the
shader.

```srsl
ShaderType = Fragment;

Input fsIn{
    float4 position: SRV_POSITION;
    float2 texCoords: TexCoords;
};

Output fsOut{
    float4 color: SRV_TARGET_0;
};

Texture2D(slot = 0) albedo;
Sampler(slot = 0) sampler0;

void main() {
    fsOut.color = sampleTexture(albedo, sampler0, fsIn.texCoords);
    if (fsOut.color.a < 0.1f){
        discard;
    }
}
```
This is a basic fragment shader that takes in a position and texture coordinates and outputs a color. This fragment shader
also takes a texture and sampler as input. The texture and sampler are declared using the 'Texture2D' and 'Sampler'
keywords. The slot parameter is used to specify the slot that the texture or sampler should be bound to. This shader
checks if the alpha value of the color is less than 0.1. If this is the case, the fragment is discarded. This creates
a transparent effect.

## Tests
The project should have a folder called 'tests' in the root. This folder contains some integration tests which
are using the SyriusCore library. This library is used to create a window and render a quad with the generated
shader code. The output of the tests should all be a bit different as the tests are all testing different features
of the SRSL language (texture sampling, constant buffers, matrix multiplication, ...).

the SyriusCore library can be found here:
https://github.com/SyriusEngine/SyriusCore

## License
This project is licensed under the GPL-3.0 License - see the LICENSE file for details.



