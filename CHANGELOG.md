# LibVerlim Changelog

---

## Changes for version **0.68**

* This update focuses on more smaller updates.

Latest Changes Pull: [#103](https://github.com/Equinoxtic/libverlim/commit/3db4b3c63f776bc821169423acdc9dc493fff8ff)

---

### New features
---

* `cstrutils`, works the same way as `stringutils` alongside with new functions that modify strings, specifically: `_upstr()` (For uppercase strings) and `_lowstr()` (For lowercase strings).
	+ NOTE: `stringutils` will eventually have functions similar to this very soon, so just wait. <3
* New `version` command, displays the current version of "LibVerlim".

### Updates

* `keyinput` now uses `enums` instead of using `#define` macro.
* `setuplib()` now updated to have custom *"compiling"* and *"compiled"* messages at startup.
	+ Also removed the `continue` keyword thing, it just caused the other files to not compile so just stick with a slow startup for now until I find a fix for it.
	+ Added a 150ms delay per each time that a file finishes compiling.

<!-- **[NOTE]** : This release may be still buggy since it's a big one so please let me know if there are any bugs!!! -->
