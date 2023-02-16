if (-not([System.IO.File]::Exists("bin/"))) {
	New-Item -ItemType "directory" "bin/"
}

cmake -G "Visual Studio 17 2022" -A Win32 -S . -B bin
cmake --build bin --target verlimdemo --config Release
