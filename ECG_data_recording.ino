/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;
Servo myservo1;// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;
int pos1 = 0;// variable to store the servo position
int yell;
void setup() {
  myservo.attach(9);
  myservo1.attach(10);// attaches the servo on pin 9 to the servo object
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(5,INPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  pos = analogRead(A0);
  pos1= analogRead(A1);
  float voltagex = pos  ;
  float voltagey = pos1 ;
  yell = digitalRead(5);
 Serial.println(voltagex);
  Serial.println(voltagey);
   Serial.println(yell);
    myservo.write(voltagex); 
    myservo1.write(voltagey);   // tell servo to go to position in variable 'pos'
    delay(15);        
    // waits 15ms for the servo to reach the position
  }
  
