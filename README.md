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
![image](https://user-images.githubusercontent.com/17178089/219035226-a3581486-45e2-4138-81fa-17abef689ecf.png)

### Layout 1 (Numpad)
![image](https://user-images.githubusercontent.com/17178089/219035308-be7a817e-307d-4c8b-b982-ecfa774be225.png)

## Layout 2 (Keyboard light control)
![image](https://user-images.githubusercontent.com/17178089/219035363-5b209dad-087c-4b2e-b6bb-1bad11b9aca9.png)

## Layout 3 (Colemak)
![image](https://user-images.githubusercontent.com/17178089/219035500-ae5b160e-8b8a-4995-a54e-7752599d8dcd.png)
