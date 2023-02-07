if (-not([System.IO.File]::Exists("bin/"))) {
	New-Item -ItemType "directory" "bin/"
}

if (-not([System.IO.File]::Exists("logs/"))) {
	New-Item -ItemType "directory" "logs/"
	if (-not([System.IO.File]::Exists("logs/log.txt"))) {
		New-Item -ItemType "file" "logs/log.txt"
	}
}

cmake -G "Visual Studio 17 2022" -A Win32 -S . -B bin
cmake --build bin --target verlimdemo --config Release
