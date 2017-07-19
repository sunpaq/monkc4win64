# monkc4win64

port Monk-C into Windows (64bit)

### Play Monk-C use Visual Studio

	Visual Studio (Community version is free now) must be installed.
    just clone this repo and double click the .sln in the root folder

### Use Monk-C static library on other Visual Studio project

    just copy the following static library and header file
    monkc4win64/x64/Debug/monkc4win64lib.lib
    monkc4win64/monkc4win64lib/monkc.h

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

