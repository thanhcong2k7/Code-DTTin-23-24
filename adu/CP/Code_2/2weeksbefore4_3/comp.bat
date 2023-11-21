g++ %1.cpp -o a.exe
powershell "(Measure-Command {./a.exe | Out-Default}).ToString()"
del a.exe