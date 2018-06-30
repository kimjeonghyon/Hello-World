
#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3); //Connect HC-06. Use your (TX, RX) settings
 
 

int sensorpin = 0;           // analog pin used to connect the sharp sensor
int val = 0;                 // variable to store the values from sensor(initially zero)

void setup()
{
  Serial.begin(9600);               // starts the serial monitor
  BTSerial.begin(9600);  // set the data rate for the BT port
}
 
void loop()
{
  val = read_range(sensorpin);       // reads the value of the sharp sensor

  //if (val < 10) val = 10;
  //if (val > 80) val = 80;
  
  Serial.println(val);            // prints the value of the sensor to the serial monitor 
  
  if (BTSerial.available()) {
    BTSerial.println(val);
  }
  
  delay(100);                    // wait for this much time before printing next value
}

float read_range(byte pin)
{
  int tmp;

  tmp = analogRead(pin);
  if (tmp < 3)
   return -1;

   return (6787.0 / ((float)tmp - 3.0)) - 4.0;
}


