#include "mbed.h"
#include "rtos.h"

SPI spi(SPI1_MOSI, SPI1_MISO, SPI1_CLK, SPI1_CS); // mosi, miso, sclk
DigitalOut cs(SPI1_CS);

int main() {
    int i = 0;

    printf("KM SPI Starts\r\n");

    cs=0;
    while(true) {
        spi.write(i);
        i++;
        if (i > 255) {
            break;
        }
    }
    cs=1;
}
