/* Arduino

If the device works correctly, when you run this code and open the serial 
monitor, you will see text on the serial monitor.
*/

void setup() {
	Serial.begin(9600);
}

void loop() {
	Serial.println("Hello, World!");

	if(Serial.available()) {
		char c = Serial.read();

		Serial.print("Got");
		Serial.println(c); 
	}
}