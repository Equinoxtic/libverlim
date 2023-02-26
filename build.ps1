if (-not([System.IO.File]::Exists("build/"))) {
	New-Item -ItemType "directory" "build/"
}

cmake -G "Visual Studio 17 2022" -A Win32 -S . -B build
cmake --build build --target verlimdemo --config Release
