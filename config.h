#ifndef CONFIG
#define CONFIG


// For the Shelly Dimmer 2
/*
#define SHELLY_BUILTIN_LED 16
#define SHELLY_SW1 14
#define SHELLY_SW2 12
#define SHELLY_BUILTIN_SWITCH 13

#define STM_NRST_PIN 5
#define STM_BOOT0_PIN 4
*/

// For the Shelly 1L
#define SHELLY_BUILTIN_LED 0    // Built-in led

// SW1 of Shelly 1L seems very prone to noise
// See here: https://community.home-assistant.io/t/shelly-1l-sw1-issue/402036
// By default, we disable it
//#define SHELLY_SW1 4            // Switch 1
#define SHELLY_SW2 14           // Switch 2
//#define SHELLY_SW0 13           // Built-in switch
#define LIGHT_RELAY 5           // Relay for swtiching on/off the light



  
namespace helpers {

  bool isInteger(const char* str, uint8_t maxLength=10);
  bool convertToInteger(const char* str, uint16_t &val, uint8_t maxLength=10);
  const char* hexToStr(const uint8_t *s, uint8_t len);
}

#endif
