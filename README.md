# monkc4win64

port monkc into Windows (64bit)

### Play Monk-C use Visual Studio

	Visual Studio (Community version is free now) must be installed.
    just clone this repo and double click the .sln in monkc4win64/MC folder

### Use Monk-C on other Visual Studio project

    just copy the following static library and header file
    monkc4win64/MC/MC/monkc.h
    monkc4win64/MC/MC/libmonkc_win64.a

### Modify the Monk-C runtime library

    1. install the MinGW-64
    2. install the Eclipse (and its CDT plugin)
    3. open the workspace folder (the one has .metadata folder)
    4. you can copy out new version .a and .h files you build.

### About C99 and MinGW-64

    C99 standard is widly used by open source software.
    but Microsoft's compiler doesn't support this standard.
    thanks to the MinGW project. we can use their GCC on windows
    to build the open source software.

    after we build the Monk-C runtime library via MinGW
    Visual Studio projects can use the static library and header file.
