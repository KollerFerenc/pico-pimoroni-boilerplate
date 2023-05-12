#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    stdio_init_all();
    
    while (true) {
        sleep_ms(250);
        printf("Hello World\n");
        sleep_ms(1000);
    }
}
