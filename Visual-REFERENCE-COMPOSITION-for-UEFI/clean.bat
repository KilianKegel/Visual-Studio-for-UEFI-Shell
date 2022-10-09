@echo off
echo clean up...
for /D %%d in (lib x64) do if exist %%d rd /s /q %%d
if exist hexdump.xlsx del hexdump.xlsx

