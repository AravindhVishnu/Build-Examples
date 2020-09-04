# Build-Examples
Simple project build examples using GNU Make and CMake/Ninja for Linux and Windows.

Tools:
- Visual Studio Code is used as editor.
- GCC is used as compiler/linker.
- GDB is used as debugger.

The main project (MyExampleProgram) includes the following subprojects:
- MyStaticLib: Simple static library example.
- MyDLL: Simple shared library example.
- MyExperiment: Client that uses the static- and shared library in a simple way.

Configurations:
- Install CMake https://cmake.org/download/
- Install Ninja https://ninja-build.org/
- Install Visual Studio Code https://code.visualstudio.com/
- Install GnuWin32 (only for Windows) http://gnuwin32.sourceforge.net/
- Install mingw64 (only for Windows) http://mingw-w64.org/doku.php/download/mingw-builds

In Windows, configure the PATH environment variable to include the following folder paths:
- C:\GnuWin32\bin
- C:\Program Files\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin
- C:\Program Files\CMake\bin
- C:\ninja
