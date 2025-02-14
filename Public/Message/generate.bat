@echo off
setlocal enabledelayedexpansion

set OUTPUT_PATH=..\..\Assets\Scripts\HotUpdate\Message
set BASE_PATH=%~dp0

for /r %%i in (*.proto) do (
	rem 获取完整的目录路径
	set DIR_PATH=%%~dpi

	rem 获取文件名
	set FILE_NAME=%%~nxi

	rem 去除基准路径，获取相对路径
	set "RELATIVE_PATH=!DIR_PATH:%BASE_PATH%=!"
	
	rem 输出目录的绝对路径
	set OUTPUT_DIR_PATH=!OUTPUT_PATH!\!RELATIVE_PATH!

	rem 确保输出目录存在
	if not exist !OUTPUT_DIR_PATH! mkdir !OUTPUT_DIR_PATH!

	rem 调用protoc生成文件
	protoc --proto_path=!RELATIVE_PATH!  --csharp_out=!OUTPUT_PATH!\!RELATIVE_PATH! !FILE_NAME!

	echo generate !OUTPUT_PATH!\!RELATIVE_PATH! !FILE_NAME!
)

endlocal

pause