@echo off
title Code runner
C:
cd Code
:bruh
set /p tl=Filename: 
echo Compiling %tl% ...
g++ %tl%.cpp -o %tl%.exe
echo Running %tl% ...
%tl%
del %tl%.exe
echo Done! Continue with new task!
goto bruh