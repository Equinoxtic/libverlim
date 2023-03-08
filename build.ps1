if (-not([System.IO.File]::Exists("build/"))) {
	New-Item -ItemType "directory" "build/"
}

if (-not([System.IO.File]::Exists("logs/"))) {
	New-Item -ItemType "directory" "logs/"
}

if (!(Test-Path -Path "logs/log.txt" -PathType Leaf)) {
	New-Item -ItemType "file" "logs/log.txt"
}

cmake -G "Visual Studio 17 2022" -A Win32 -S . -B build
cmake --build build --target verlimdemo --config Release
