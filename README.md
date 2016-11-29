# INIT.EXE
Init.exe is a very small tool that starts a batch file called "init.bat". This is so you can use IEXPRESS.EXE to convert your batch files to an EXE and run them.

# Compiling
1) Make sure you have MinGW installed. If you use an IDE, go ahead and compile init.cpp with that, you don't need to follow these steps.
2) Make sure the %PATH% variable has "C:\MinGW\bin;" somewhere in it. If you're adding it to the end of your %PATH%, make sure it looks something like "C:\my;C:\my\path;C:\my\path\variable;C:\MinGW\bin;".
3) Run "g++ -o init.exe init.cpp" to compile it from the command line. Make sure init.cpp is in the same directory
4) Tada! You've compiled it! You may notice however the file size is 20KB bigger than init.exe. Go use UPX on it to shrink it down - https://upx.github.io/
