# LibVerlim Changelog

## Changes for version **0.75**

* An update for some UI library changes.

Latest Changes Pull: ([#110](https://github.com/Equinoxtic/libverlim/pull/110))

---

### New features

---

* `uipos` library, acts as a backend for setting positions for positioning the `consoleui` elements.
* New namespace for `consoleui` library, `ui`, the namespace trend is getting onto me now, eheh.
* `option` has a new function for creating "named" options (`create_namedoption()`). Takes a string as the main parameter instead of an integer.
* New `consoleui` elements, `prompt` and `tablelist`

### Updates

---

* Updated `libcommand` and `liboptions` to have a row system.
* `typedef structs` have now been updated to the C++ standard.

```cpp
typedef struct Option {
	// ...
} Option;
```

* `option` also now has an updated look.

```sh
[N]: "option"
```

* Hotfixes to `resconfig` after the namespace change.
* `seperator` has now an updated `formatted_seperator()` function, this new version has two new parameters `begin: string` and `end: string`. I think it's pretty self explanatory just from the names. `begin` puts a string on the beginning of the seperator, and `end` will put it on the end of the seperator.


<!-- **[NOTE]** : This release may be still buggy since it's a big one so please let me know if there are any bugs!!! -->
