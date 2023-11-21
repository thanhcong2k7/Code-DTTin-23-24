@echo off
title Code runner
E:
cd Code
:bruh
set /p tl=Filename: 
echo Compiling %tl% ...
g++ %tl%.cpp -o %tl%.exe
echo Running %tl% ...
%tl% < input.txt
del %tl%.exe
echo Done! Continue with new task!
goto bruh