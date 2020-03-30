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

/* Simple serial line monitoring/debuging */
#define NOBUG 1 // Activate with non-zero value
#if NOBUG
    #define NBB(x) Serial.begin(x)
    #define NB(x) Serial.print(x)
    #define NBL(x) Serial.println(x)
    #define NBL2(x, y) { Serial.print(x); Serial.println(y); }
#endif

/**
 * @brief Program initialization.
 */
void setup() {
    #if NOBUG
        NBB(115200);
        NBL2(F("Air quality sensor v"), F(VERSION));
    #endif
}

/**
 * @brief Program main loop.
 */
void loop() {
}
