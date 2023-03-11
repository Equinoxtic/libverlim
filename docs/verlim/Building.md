# Building the LibVerlim demo from source

* Building `libverlim` from source does not require any additional libraries.
* You just need to have:
	+ GCC/G++ installed
	+ CMake installed
	+ Make installed
* You will also need [Powershell Core](https://github.com/PowerShell/PowerShell) for `WIN32` directives.
* You will also need to install [Visual Studio 2022](https://visualstudio.microsoft.com/) and some components.
	* Individual components to install:
	```
	Windows 11 SDK (10.22000.0)
	MSVC v143 - VS 2022 C++ x64/x86
	```

First, git clone the resources for LibVerlim.

```sh
$ git clone https://github.com/Equinoxtic/res
```

If you have the console already running, you can run:

```
> res-install
```

To start building, type ``./build.sh`` or ``.\build.ps1`` for Windows users.

To run, type ``./run.sh`` or ``.\run.ps1`` for Windows users.

## Download Links

* [GCC/G++](https://gcc.gnu.org/)
* [CMake](https://cmake.org/)
* [Make](https://www.gnu.org/software/make/)
* [PowerShell Core](https://github.com/PowerShell/PowerShell)
