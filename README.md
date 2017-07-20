# monkc4win64

port Monk-C into Windows (64bit)
using Visual Studio 2017

### Play Monk-C use Visual Studio

	Visual Studio (Community version is free now) must be installed.
    just clone this repo and double click the .sln in the root folder

### Use Monk-C static library on other Visual Studio project

    just copy the following static library and header file
    monkc4win64/libs/monkc.lib
    monkc4win64/libs/monkc.h

### Setup Visual Studio project to use static library

    create a folder under your project root
    drop all the .h .lib files you need in it
    
    right click the project and open 'property'
    'VC++ Directories' - 'Include Directories' => add the folder contains your .h
    'VC++ Directories' - 'Library Directories' => add the folder contains your .lib
    'Linker' - 'Input' - 'Additional Dependencies' => add the your_lib_name.lib;
    click 'Apply' button
    click 'Save/OK' button

### Modify the monkc.lib

    please clone another repo:
    https://github.com/sunpaq/monkc

    then goto the platforms/windows folder
    double click the .sln in sub folder

### About build assembly use Visual Studio

    Visual Studio will not compile .asm file by default
    so if you want to modify the assembly part of Monk-C
    please refer to the following steps:

    right click the .asm file and open 'property'
    'General' - 'Exclude From Build' => No
    'General' - 'Item Type' => Custom Build Tool'
    click 'Apply' button

    'Custom Build Tool' - 'Command Line' => ml64 /c %(fileName).asm
    'Custom Build Tool' - 'Outputs' => %(fileName).obj
    click 'Apply' button
    click 'Save/OK' button

    reference blog (Chinese):
    http://www.yiiyee.cn/Blog/asm/

