#include QMK_KEYBOARD_H

void matrix_init_user(void) {
  rgb_matrix_enable();
}

void rgb_matrix_indicators_user(void) {
  if (rgb_matrix_get_mode() == RGB_MATRIX_SOLID_COLOR) {
    // Always use "solid color" as "no amimations illuminated", so that indicators below can work
    rgb_matrix_set_color_all(0, 0, 0);
  }

  if (IS_HOST_LED_ON(USB_LED_CAPS_LOCK)) {
    rgb_matrix_set_color(15, 0xFF, 0xFF, 0xFF);
  } else {
    rgb_matrix_set_color(15, 0, 0, 0);
  }

  if (IS_HOST_LED_ON(USB_LED_SCROLL_LOCK)) {
    rgb_matrix_set_color(24, 0xFF, 0xFF, 0xFF);
  } else {
    rgb_matrix_set_color(24, 0, 0, 0);
  }
}

