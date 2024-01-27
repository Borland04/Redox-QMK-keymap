# Redox-QMK-keymap
[QMK](https://docs.qmk.fm/#/) config for [Redox wireless v2.0WHS keyboard](https://github.com/mattdibi/redox-keyboard/tree/master/redox-w), driven by personal preferences: for coding(+vim) and gaming, but not too different from plain keyboards.

To configure layouts, [QMK Configurator](https://config.qmk.fm/#/redox/rev1/base/LAYOUT) was used.

### Configuration description
Keyboard consists of 3 layers:
* QWERTY;
* NUMPAD;
* SERVICE (Alternative arrows, additional F-keys, Mouse controls).

Keys `F13 - F17` on SERVICE layer are used for media control:
* On Windows, I use [Sound Switcher](https://soundswitch.aaflalo.me/) to switch audio output/mute microphone using hotkeys 
* On KDE, I assigned a `pactl` scripts to these keys

# Installation:
Mostly installation follows QMK and Redox instructions:
```
> cd <qmk_firmware>/keyboards/redox/keymaps
> mkdir <unique_name(your username or so)>
> cd <unique_name>
> cp ../default/* .
> cp /path/to/config.json .

> qmk json2c config.json > keymap_definition.c # Warning: this will overwrite previous config!
# Copy-paste content of 'keymap_definition.c' directly into 'keymap.c', replacing keymap matrix 'const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS]'
# or remove keymap matrix and add '#include "keymap_definition.c"' instead

> cd <qmk_firmware>
> make redox_w:<unique_name>:avrdude`
Copy-paste `keymap_definition.c` content directly to `keymap.c` or use `#include` directive.
```

# Configuration screenshots:
### Main layout

### Layout 1 (NUMPAD)

## Layout 2 (SERVICE)
