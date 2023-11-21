@echo off
echo Downloading 7-zip
curl -L -o 7z.dll "https://raw.githubusercontent.com/kmille36/thuonghai/master/7z.dll"
curl -L -o 7z.exe "https://raw.githubusercontent.com/kmille36/thuonghai/master/7z.exe"
curl -L -o 7zip_inst.exe "https://www.7-zip.org/a/7z2201-x64.exe"
7zip_inst.exe /S
del 7zip_inst.exe
echo Downloading Adobe After Effects CS6
curl -L -o aecs6.zip "https://docs.google.com/uc?export=download&confirm=t&id=1mqYfjlaIpx682byZQS3x4gOy6sTgutHQ"
echo Downloading spectrum template
curl -L -o spec.zip "https://docs.google.com/uc?export=download&confirm=t&id=1ZTIYVxivAQETD5Be4_w0Zx1TGlBgoo8r"

echo Extracting & installing AECS6
mkdir aecs6
7z.exe x -y aecs6.zip -oaecs6/ -p1234

echo Extracting spectrum template
mkdir spec
7z.exe x -y spec.zip -ospec/

echo Installing AECS6
cd aecs6
Set-up.exe

echo Completed!
pause