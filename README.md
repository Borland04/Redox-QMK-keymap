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
![image](https://github.com/Borland04/Redox-QMK-keymap/assets/17178089/804d32f6-7baa-4c79-a54d-8525a50b19ec)

### Layout 1 (Service)
![image](https://github.com/Borland04/Redox-QMK-keymap/assets/17178089/cc0fe043-eece-4ee4-a04d-04aeb1178242)

## Layout 2 (Colemak)
![image](https://github.com/Borland04/Redox-QMK-keymap/assets/17178089/1fd9bedb-c0a6-4385-9ef3-db045b1c6589)
