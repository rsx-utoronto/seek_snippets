/* Motor + Driver Unit Test

The motor should go forward for one second, then backward for a second.

Battery pack    black       red           
Motor:                             Copper leads
Motor Driver:   GND    5V   12V    Group of two pins          IN1   IN2
Arduino:        GND    n/a                                    6     7

*/

void setup()
{
   pinMode(6, OUTPUT); // Attach pins 6 and 7 to signal
   pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH);  // Go in one direction
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(6, LOW);  // Switch the direction
  digitalWrite(7, HIGH);
  delay(1000);
}
