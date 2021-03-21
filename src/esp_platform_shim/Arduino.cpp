#include "Arduino.h"

#include "driver/gpio.h"

void IRAM_ATTR pinMode(uint8_t pin, uint8_t mode) {
    // since FastAccelStepper only calls pinMode(pin, OUTPUT), we only partially implement it
    if (mode == INPUT) {
        gpio_set_direction((gpio_num_t) pin, GPIO_MODE_INPUT);
    } else if (mode == OUTPUT) {
        gpio_set_direction((gpio_num_t) pin, GPIO_MODE_OUTPUT);
    }
}

void IRAM_ATTR digitalWrite(uint8_t pin, uint8_t val) {
    gpio_set_level((gpio_num_t) pin, val);
}
