void setup() {
delay(1000);
Keyboard.begin();
Keyboard.println("#MCU Connected OK");
delay(1000);
Keyboard.println("#IO Expander found at 0x00");
}

void loop() {
 delay(10000); 
}
