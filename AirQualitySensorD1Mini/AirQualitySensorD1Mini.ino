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
 *  - Install Adafruit GFX and ST7735 libraries
 *  
 * Electrical circuit
 * 
 * D1 Mini Pro ---> TFT display
 * -------------------------------------------------
 * 3V3              VCC             Voltage
 * GND              GND             Ground
 * D8               CS              Chip select
 * D4               RST             Reset
 * D3               RS              Data/Command
 * D7               SDA             SPI Data
 * D5               CLK             SPI Clock
 * 
 * D1 Mini Pro ---> Sensors
 * -------------------------------------------------
 * 3V3              VCC             Voltage
 * GND              GND             Ground
 * D1               SCL             I2C Clock
 * D2               SDA             I2C Data
 * D6               WAK             Wake-up CCS911 (via LOW)
 *                  INT             Interrupt CCS911 (via LOW)
 *                  RST             Reset CCS911 (via LOW)
 *                  ADD             I2C Address change
 *                    
 */

#include "Adafruit_GFX.h"
#include <Adafruit_ST7735.h> 

#define VERSION "0.1"

/* Simple serial line monitoring/debuging */
#define NOBUG 1 // Activate with non-zero value
#if NOBUG
    #define NBB(x) Serial.begin(x)
    #define NB(x) Serial.print(x)
    #define NBL(x) Serial.println(x)
    #define NBL2(x, y) { Serial.print(x); Serial.println(y); }
#endif

/* Define TFT display */
#define TFT_CS D8
#define TFT_DC D3
#define TFT_RST D4

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

/**
 * @brief Program initialization.
 */
void setup() {
    #if NOBUG
        NBB(115200);
        NBL2(F("Air quality sensor v"), F(VERSION));
    #endif

    // Initialize a ST7735S chip, black tab
    tft.initR(INITR_BLACKTAB);   

    // Show splash
    tft.fillScreen(0x0000);
    tft.setCursor(10, 80);
    tft.setTextColor(0xffff);
    tft.setTextSize(1);
    tft.print("Air Quality Sensor");
}

/**
 * @brief Program main loop.
 */
void loop() {
}
