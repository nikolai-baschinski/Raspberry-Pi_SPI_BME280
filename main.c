// Nikolai Baschinski
// nikolai.baschinski(at)web.de
// Reading temperature, air pressure, and humidity from the BME280
// Displaying the data on the console

#include <stdio.h>
#include <unistd.h>
#include "bme.h"

int main()
{
  struct BME280_for_LCD data;

  init_SPI();
  init_BME();

  while(1) {
    cyclic_BME(&data);

    printf("Temperature: \t%.1f C\n", data.temperature);
    printf("Air pressure: \t%d hPa\n", data.pressure);
    printf("Humidity: \t%d %%\n\n", data.humidity);
    printf("\033[4A"); 

    sleep(1);
  }
}
