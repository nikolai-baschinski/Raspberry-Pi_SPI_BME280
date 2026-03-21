BME280 data (temperature, air pressure and humidity) on the Raspberry Pi 5. Retrieved via the SPI bus.

![BME280 connected to the Rapberry Pi 5](/Doc/IMG_4987.jpg)

| PIN Pi   | Name     | Color Seengreat | Function |
|----------|----------|-----------------|----------|
| 1        | 3V3 power| red             | Vcc      |
| 6        | Ground   | black           | GND      |
| 19       | GPIO10   | yellow          | MOSI     |
| 21       | GPIO9    | orange          | MISO     |
| 23       | GPIO11   | blue            | CLK      |
| 24       | GPIO8    | green           | CS       |

![GPIO Pin Layout Raspberry Pi 5](/Doc/GPIO-Pinout-Diagram-2.png)

1. Connect the BME280 sensor to the Raspberry Pi 5
2. Clone the repo
3. Enable SPI interface on the Pi
4. Build the project
   gcc bme.c main.c -o bme
5. Run the project
   ./bme

![Console output](/Doc/Console_BME280_data.jpg)
