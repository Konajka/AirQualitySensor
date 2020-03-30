/**
 * @brief Air quality sensor measuring temperature, humidity, CO2 level and TVOC level.
 * 
 * @author konajka@email.cz https://github.com/Konajka
 * @version 0.1 2020-03-30
 * 
 * Part list:
 *  1. Wemos D1 Mini Pro
 *  2. 1.8" TFT display 128x160px with ST7735 controller
 *  3. Sensor CJMCU-8128 (CCS811 + HDC1080 + BMP280)
 *  
 * Arduino IDE setup
 *  - Add boards library URL via File - Options: http://arduino.esp8266.com/stable/package_esp8266com_index.json
 *  - Download ESP8266 board drivers via Board manager.
 *  - Select target board: LOLIN(WEMOS) D1 R2 & Mini
 *  - Set Debug port to Serial
 *  - Set baud rate to 115200 in Serial monitor
 */

#define VERSION "0.1"

/**
 * @brief Program initialization.
 */
void setup() {
    Serial.begin(115200);
    Serial.print(F("Air quality sensor v"));
    Serial.println(F(VERSION));
}

/**
 * @brief Program main loop.
 */
void loop() {
}
