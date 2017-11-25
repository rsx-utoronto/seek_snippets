/* Bluetooth Unit Test

If the device works correctly, you will be able to pair your arduino with your
device. When you type 'a', the LED built into pin 13 should light up, and when 
you type 'b', the LED turn off.

Bluetooth:  RX    TX     GND     +5V
Arduino:    2     3      GND     5V

*/

#include <SoftwareSerial.h>

SoftwareSerial mySerial (2,3); //RX, TX of Arduino
void setup() {
    mySerial.begin(9600);
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
    while (mySerial.available()) {
        char c = mySerial.read();
        if(c == 'a'){
          digitalWrite(LED_BUILTIN,HIGH);
        }else if(c == 'b'){
          digitalWrite(LED_BUILTIN,LOW);
        }
    }
}
