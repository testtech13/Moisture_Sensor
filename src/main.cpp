/*Quick program to read capactive soil moisture sensor
* Scales raw value to percentage
*
*/

// Observed MIN MAX values for moisture sensor
#define MIN 300
#define MAX 570


#include <Arduino.h>
int16_t moisture = 0;
void setup() {
  //Start Serial Port
  Serial.begin(115200);
  Serial.println("Start");
}

void loop() {
  //Read Raw Value from Moisture Sensor
  moisture = analogRead(0); 
  Serial.print("Raw Value: ");
  Serial.println(moisture);
  //Map Raw value to Percentage
  Serial.print("Percentage: ");
  Serial.println(map(moisture, MAX, MIN, 0, 100));
  //Waste some time before the next measurement
  delay(1000);
  
}