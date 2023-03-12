# LibVerlim Changelog

---

## Changes for version **0.65**

Another BIG and Large update!!!

This update involves bug fixes, QoL stuff and new features!

## Library Updates
---

Main Library changes, bug fixes and more.

### Changes
---
* Updated display addons:
	+ ["bar"](https://github.com/Equinoxtic/libverlim/commit/ada067d7e4250d4e574a5dafa9644feeff8e2cca)
	+ ["seperator"](https://github.com/Equinoxtic/libverlim/commit/ada067d7e4250d4e574a5dafa9644feeff8e2cca)
* Updated ["liboptions"](https://github.com/Equinoxtic/libverlim/commit/61cbce9fd2dbf74f30490dbe27896f5375b0158f)
	+ `titleheader` properly works with empty strings, I think.
* Updated ["titleheader"](https://github.com/Equinoxtic/libverlim/commit/5b6bcc5fe1820f17af8131239a116e735a51272a)
* Updated ["libshell" [1]](https://github.com/Equinoxtic/libverlim/commit/ada067d7e4250d4e574a5dafa9644feeff8e2cca), [[2]](https://github.com/Equinoxtic/libverlim/commit/231a123ae38eb18697e039346c4771902b0ed0c1), [[3]](https://github.com/Equinoxtic/libverlim/commit/41f8c443305b95c8f0d964e96f9cdfaf1408e531)
* Updated ["limstdio" [1]](https://github.com/Equinoxtic/libverlim/commit/259f775dd36ae70434b5cfc4a27016f6f4d11e5b), [[2]](https://github.com/Equinoxtic/libverlim/commit/2204bd0627f576258f4c9e98f989c2963942455e), [[3]](https://github.com/Equinoxtic/libverlim/commit/d20a7a679192202947d8ea074010a01e3f8568e9), [[4]](https://github.com/Equinoxtic/libverlim/commit/32c4f026fa9f793bdad1226602bc3d95314b8ef9)
* Updated ["mathlib"](https://github.com/Equinoxtic/libverlim/commit/f8655a314948a58e8989889fccea4b1b7c7b3b57)
* Updated ["fs" [1]](https://github.com/Equinoxtic/libverlim/commit/9de6d534cc2c5e3cffbb101671036d4ad775602b), [[2]](https://github.com/Equinoxtic/libverlim/commit/4986855a830d2b43310d20b94ec366a0f6e941bf), [[3]](https://github.com/Equinoxtic/libverlim/commit/41f8c443305b95c8f0d964e96f9cdfaf1408e531)
* Updated ["loader"](https://github.com/Equinoxtic/libverlim/commit/d8f71e31bcb62490c642a85bb76fbd515a5da8f4)
* Updated ["sys"](https://github.com/Equinoxtic/libverlim/commit/ead6cc45e0641e30e26f8b8941abff42f8ad26c8)
* Updated ["http"](https://github.com/Equinoxtic/libverlim/commit/dec116f30be64362755ec327a212e3ac8bbd5f02)
* Updated ["logging"](https://github.com/Equinoxtic/libverlim/commit/a09e336086652410d58a42cd5a53b4c69f0530ca)
* Updated ["error"](https://github.com/Equinoxtic/libverlim/commit/6c6a52d1c7c7a7f9d0266c2a19a2ea8002797700) and ["warn"](https://github.com/Equinoxtic/libverlim/commit/f88c1e280da8812276e42149828c82fc79b3eb5a)
* Updated ["build scripts"](https://github.com/Equinoxtic/libverlim/commit/f322edaf04231c8d1d9423d59a41144adbb38ed4)
* Updated Building Documentation: [Building.md](https://github.com/Equinoxtic/libverlim/commit/7eecbbe6bf1cec033a02f67b1c64194a5d1f4576)
* Updated ["winmem"](https://github.com/Equinoxtic/libverlim/commit/759cfba2a502b5b31df162ee0ce80c6a5aa2c7a6)

### New Features
---
* New addons:
	* ["libcommand"](https://github.com/Equinoxtic/libverlim/commit/59b482f3f22bbae7f597debb44dac22fb1207839)
* New main LibVerlim files:
	+ ["color"](https://github.com/Equinoxtic/libverlim/commit/3834cc017567711d15006c291f6454678cab4d72) by [aafulei](https://github.com/aafulei)
	+ ["keyinput"](https://github.com/Equinoxtic/libverlim/commit/bb85947e757c59458b6ca799827c4a99ca6511f3)
* New [LICENSE](https://github.com/Equinoxtic/libverlim/commit/050015790697b43a04123380e8fd9dc587df7262)
* New `lstd`, `lsys`, `logger`, `lvfs` and `http` namespaces:
	+ [Change Commit](https://github.com/Equinoxtic/libverlim/commit/690e771b4c1555077eb234c8ba77fb2a7290c1a8)
* 

## Console Updates
---

## Changes
---
* Updated source files:
	+ Revision 1 : [[...]]("https://github.com/Equinoxtic/libverlim/commit/76847e93656e8d2603d0135da6fb231b11bf60e0")
	+ Revision 2 : [[...]]("https://github.com/Equinoxtic/libverlim/commit/7dd57b1764d6555736be5274876b5ba452853d27")
	+ Revision 3 : [[...]](https://github.com/Equinoxtic/libverlim/commit/49ca107b7fe355c69712ccd7cd87c92442da9f79)
	+ Revision 4 : [[...]](https://github.com/Equinoxtic/libverlim/commit/0aa7ef3e605c6cfab167c1bc66e57497b19fe16a)
* Command migration: [Commit](https://github.com/Equinoxtic/libverlim/commit/0a78c23d548678e5c95d9362f33c0ebf9f48effe)

### New Features
---
* New `parser`:
	+ Revision 1 : [[...]](https://github.com/Equinoxtic/libverlim/commit/85028b4fe64d9c14206a67083a8fb76ed8d06d81")
	+ Revision 2 : [[...]](https://github.com/Equinoxtic/libverlim/commit/e478e2097a8223eec0fedd2efbf2810738c9ce4c")
		+ Properly parses and works with custom flags.
* New commands:
	+ ["gitcpp"](https://github.com/Equinoxtic/libverlim/commit/2f6ffc392ba6fd1d16443efa6ff836c3e82fbb7c) `(Git Checkout, Pull, Push)`
	+ ["res-install"](https://github.com/Equinoxtic/libverlim/commit/890d6b82cbfa1bed6ac57f8a73bda7337a85c179) `(Resource Installer)`
	+ ["resconfig"](https://github.com/Equinoxtic/libverlim/commit/cc76f847a05e5819eb431bdf20edb9a44eb8fdf0) `(Resource Configuration)`

## MISC Updates
---
* Ignore `res` folder [[...]](https://github.com/Equinoxtic/libverlim/commit/530e3bf811dfb9828307494cdac8b3b18e44a944)
* Move `libversion` [[...]](https://github.com/Equinoxtic/libverlim/commit/dc41ea94f64d1cb3c02cc8191b667121c2c77ab9)
* New TODO: [TODO.md](https://github.com/Equinoxtic/libverlim/blob/master/docs/TODO.md)


**[NOTE]** : This release may be still buggy since it's a big one so please let me know if there are any bugs!!!
