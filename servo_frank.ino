#include <Servo.h>

Servo myservo; // New servo
#define servoPin 9 // Set servo to pin 9
int sensor = 8; //Set sensor to pin 8

void setup() {
  myservo.attach(servoPin); // Attach servo variable to pin
  pinMode(sensor, INPUT);
  digitalWrite(sensor, HIGH);  // Pulls the sensor high
}
void loop() 
{
  if (digitalRead(zKey) == 0) // When sensor is triggered, turn 40 degrees
  {
    myservo.write(40);
  }
  else
  {
    myservo.write(0);
  }
}
