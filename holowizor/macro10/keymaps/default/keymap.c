#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MUTE, KC_MS_BTN1, KC_NO, KC_NO,
        KC_VOLU, KC_VOLD, KC_MPLY, KC_MNXT,
        DM_PLY1, DM_PLY2, DM_REC1, DM_REC2
    )
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else {
        if (clockwise) {
            tap_code(KC_WH_U);
        } else {
            tap_code(KC_WH_D);
        }
    }
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    oled_write_P(PSTR("Hello, Pattern-Match"), false);
}
#endif