#include <Wire.h>  // Wire.h library is required to use SX1509 lib
#include "sx1509_library.h"  // Include the SX1509 library


// Uncomment one of the four lines to match your SX1509's address
//  pin selects. SX1509 breakout defaults to [0:0] (0x3E).
const byte SX1509_ADDRESS = 0x3E;  // SX1509 I2C address (00)
//const byte SX1509_ADDRESS = 0x3F;  // SX1509 I2C address (01)
//const byte SX1509_ADDRESS = 0x70;  // SX1509 I2C address (10)
//const byte SX1509_ADDRESS = 0x71;  // SX1509 I2C address (11)
sx1509Class sx1509(SX1509_ADDRESS);


void setup() {
delay(1000);
Keyboard.begin();
Keyboard.println("#MCU Connected OK");
delay(1000);

if (sx1509.init()) { // init ok
  Keyboard.println("#IO Expander found at 0x00");
} else {
  Keyboard.println("#SX1509 INIT FAILED"); 
 }

}

void loop() {
 delay(10000); 
}
