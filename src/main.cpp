#include <stdio.h>
#include "pico/stdlib.h"

#include "common/pimoroni_i2c.hpp"

pimoroni::I2C i2c(pimoroni::BOARD::BREAKOUT_GARDEN);

int main() {
    stdio_init_all();
    
    while (true) {
        sleep_ms(250);
        printf("Hello World\n");
        sleep_ms(1000);
    }
}
