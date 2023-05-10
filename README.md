# Redox-QMK-keymap
[QMK](https://docs.qmk.fm/#/) config for [Redox rev1 keyboard](https://github.com/mattdibi/redox-keyboard/tree/master/redox), driven by personal preferences: for coding(+vim) and gaming, but not too different from plain keyboards.

To configure layouts, [QMK Configurator](https://config.qmk.fm/#/redox/rev1/base/LAYOUT) was used.

### Configuration description
Keyboard consists of 3 layers:
* QWERTY;
* SERVICE (Numpad, RGB control, Media controls);
* COLEMAK.

Default RGB lightning:
* QWERTY layer - CYAN BREATHING;
* CapsLock - RED at LEDs 6 to 15 (Internal side of keyboard);
* SERVICE layer - YELLOW at LEDS 6 to 15;
* COLEMAK layer - PURPLE STATIC all LEDS.

# Installation:
Mostly installation follows QMK and Redox instructions:
```
> cd <qmk_firmware>/keyboards/redox/keymaps
> mkdir <unique_name(your username or so)>
> cd <unique_name>
> cp <config.h, config.json, keymap.c> .
> qmk json2c config.json > keymap_definition.c # Warning: this will overwrite previous config!
> cd <qmk_firmware>
> make redox/rev1:<unique_name>:avrdude # Follow Redox instructions - connect one of the halves, press reset button, wait until 'make' is done, repeat with other half.
```

# Configuration screenshots:
### Main layout
![image](https://github.com/Borland04/Redox-QMK-keymap/assets/17178089/0b05a261-a036-4b6a-9185-f52ada9a71df)

### Layout 1 (Service)
![image](https://github.com/Borland04/Redox-QMK-keymap/assets/17178089/61014ba9-0fc2-4199-9996-f64bba72bc71)

## Layout 2 (Colemak)
![image](https://github.com/Borland04/Redox-QMK-keymap/assets/17178089/8ac647db-2f46-4d92-bd98-a6585454e621)
