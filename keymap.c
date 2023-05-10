#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _NUMPAD 1
#define _COLEMAK 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  SYMB,
  NAV,
  ADJUST,
};

#include <keymap_definition.c>


// --- CONFIGURE RGB UNDERGLOW ---
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {6, 10, HSV_RED}
);
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {6, 10, HSV_YELLOW}
);
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, RGBLED_NUM, HSV_PURPLE}
);

// Define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_layer2_layer,
    my_capslock_layer,    // Overrides layer2
    my_layer1_layer    // Overrides caps lock layer
);


// --- INITIALIZE RGB UNDERGLOW ---

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(1, led_state.caps_lock);
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _COLEMAK)); // set COLEMAK lighting (0)  when COLEMAK layout (2) is enabled
    rgblight_set_layer_state(2, layer_state_cmp(state, _NUMPAD)); // set NUMPAD lighting(2) when NUMPAD layer (1) is enabled
    return state;
}
