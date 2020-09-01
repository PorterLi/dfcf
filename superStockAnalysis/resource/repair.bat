@echo off
echo 获取Administrator权限
cacls.exe "%SystemDrive%\System Volume Information" >nul 2>nul
if %errorlevel%==0 goto Admin
if exist "%temp%\getadmin.vbs" del /f /q "%temp%\getadmin.vbs"
echo Set RequestUAC = CreateObject^("Shell.Application"^)>"%temp%\getadmin.vbs"
echo RequestUAC.ShellExecute "%~s0","","","runas",1 >>"%temp%\getadmin.vbs"
echo WScript.Quit >>"%temp%\getadmin.vbs"
"%temp%\getadmin.vbs" /f
if exist "%temp%\getadmin.vbs" del /f /q "%temp%\getadmin.vbs"
exit

:Admin
(
	zerotier-cli deorbit b7ddf2ab1f b7ddf2ab1f
	zerotier-cli orbit b7ddf2ab1f b7ddf2ab1f
	net stop ZeroTierOneService
	net start ZeroTierOneService
	zerotier-cli orbit b7ddf2ab1f b7ddf2ab1f
	ping 10.147.18.88 -n 2 -i 2
	exit
)
	