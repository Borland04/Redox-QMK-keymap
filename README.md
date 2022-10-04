# Redox-QMK-keymap
[QMK](https://docs.qmk.fm/#/) config for [Redox rev1 keyboard](https://github.com/mattdibi/redox-keyboard/tree/master/redox), driven by personal preferences: for coding(+vim), but not too different from plain keyboards.

To configure layouts, [QMK Configurator](https://config.qmk.fm/#/redox/rev1/base/LAYOUT) was used.

# Installation:
Mostly installation follows QMK and Redox instructions:
```
> cd <qmk_firmware>/keyboards/redox/keymaps
> mkdir <unique_name(your username or so)>
> cd <unique_name>
> cp /path/to/keymap.json .
> qmk json2c keymap.json > keymap.c # Warning: this will overwrite previous config!
> cd <qmk_firmware>
> make redox/rev1:<unique_name>:avrdude # Follow Redox instructions - connect one of the halves, press reset button, wait until 'make' is done, repeat with other half.
```

# Configuration screenshots:
### Main layout
![image](https://user-images.githubusercontent.com/17178089/193831082-0c57227e-0b1a-4f8f-ab25-629da057936f.png)

### MO 1 (Numpad + symbols)
![image](https://user-images.githubusercontent.com/17178089/193831393-b31670cf-2533-43e5-bfdf-e3296f2fa2ce.png)

## MO 2 (Arrows + mouse)
![image](https://user-images.githubusercontent.com/17178089/193831709-435a0086-7000-4663-bc1c-cff8cb5fd19b.png)
