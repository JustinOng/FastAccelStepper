#ifndef ARDUINO_H
#define ARDUINO_H

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_attr.h"
#include "esp_intr_alloc.h"
#include "esp32/rom/ets_sys.h"
#include "esp32/rom/gpio.h"
#include "soc/gpio_reg.h"

#define sei()
#define cli()
#define interrupts()
#define noInterrupts()

#ifndef LOW
  #define LOW 0x0
#endif
#ifndef HIGH
  #define HIGH 0x1
#endif

#define INPUT 0x01
#define OUTPUT 0x02

void IRAM_ATTR pinMode(uint8_t pin, uint8_t mode);
void IRAM_ATTR digitalWrite(uint8_t pin, uint8_t val);

#define abs(x) ((x) > 0 ? (x) : -(x))
#define min(a, b) ((a) > (b) ? (b) : (a))
#define max(a, b) ((a) > (b) ? (a) : (b))

#endif
