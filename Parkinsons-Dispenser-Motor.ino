/*
Unaizah Qutub, Tihami Islam, Tanisha Hossain, Mozhdeh Ali
Engineering Culminating: TMU Parkinsons Project
14/01/2024
*/

#include <Arduino.h> 

#define motorPin 18    ` // Pin to enable/disable motor
#define motorFwd 32     // Pin to move motor forward
#define motorRev 33     // Pin to move motor in reverse
#define buttonPin 5     // Pin for button

void setup() {
  
  pinMode(motorPin, OUTPUT);
  pinMode(motorFwd, OUTPUT);
  pinMode(motorRev, OUTPUT);  
  pinMode(buttonPin, INPUT);  
  
  Serial.begin(9600);
  while(!Serial);
  
}

void loop() {

  if (digitalRead(buttonPin) == LOW) {
    
    Serial.println("Motor On, Forward: Disk turned");
    digitalWrite(motorPin, HIGH);
    digitalWrite(motorFwd, HIGH);
  
    delay(500);
    
    Serial.println("Motor Reverse: Disk turned back");
    digitalWrite(motorRev, HIGH);
      
    Serial.println("Motor Off: Disk turned back into original position");
    digitalWrite(motorPin, LOW);
  
    Serial.println("Pill Dispensed. Keep pressing for more pills.");

    delay(1500);
      }

}




