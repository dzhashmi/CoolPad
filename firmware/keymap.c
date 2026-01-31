#include QMK_KEYBOARD_H
// -- THIS IS A WORK IN PROGRESS!!!!!! --
// -- Layer Definitions --
enum layers {
    _MAIN,
    _NAV
};

// -- Keymap --
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Main Macros */
    [_MAIN] = LAYOUT(
        KC_P7,   KC_P8,   KC_P9,    // Row 1
        KC_P4,   KC_P5,   KC_P6,    // Row 2
        KC_P1,   KC_P2,   KC_P3     // Row 3
    ),
    
    /* Layer 1: Navigation (Access by holding a key if you add MO(1)) */
    [_NAV] = LAYOUT(
        KC_HOME, KC_UP,   KC_PGUP,
        KC_LEFT, KC_NO,   KC_RIGHT,
        KC_END,  KC_DOWN, KC_PGDN
    )
};

// -- Encoder Logic --
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU); // Volume Up
        } else {
            tap_code(KC_VOLD); // Volume Down
        }
    }
    return false;
}

// -- OLED Logic -- WORK IN PROGRESS!!!!!!!!!!!!!!!!!!!!!!!!
#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_P(PSTR("CoolPAD v1\n"), false);
    oled_write_P(PSTR("------------\n"), false);

    switch (get_highest_layer(layer_state)) {
        case _MAIN:
            oled_write_P(PSTR("Layer: MACRO\n"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("Layer: NAV\n"), false);
            break;
        default:
            oled_write_P(PSTR("Layer: ???\n"), false);
    }

    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAPS") : PSTR("    "), false);
    
    return false;
}

#endif
