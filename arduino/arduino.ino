#include<Servo.h>

Servo s1;
Servo s2;
const int ledPin = 4; // the pin that the LED is attached to
int incomingByte;      // a variable to read incoming serial data into
int i=0;
int j=0;
void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  s1.attach(9);
  s2.attach(8);
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
  
    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == 'H') {
      
     while(i!=180){
      i++;
      s1.write(i);
      delay(5);             
                      
   }
   
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == 'L') {
      
       while(i!=0){
      i--;
      s1.write(i);
      delay(5);          
                      
   
    
  }
    }
    
    if (incomingByte == 'A') {
      digitalWrite(ledPin, HIGH);}

     if (incomingByte == 'B') {
      digitalWrite(ledPin, LOW);}
    } 
     if (incomingByte == 'O') {
      
     while(j!=180){
      j++;
      s2.write(j);
      delay(5);             
                      
   }
   
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == 'F') {
      
       while(j!=0){
      j--;
      s2.write(j);
      delay(5);          
                      
   
    
  }
    }
    
    }
//Motor is getting out of control because our hand gets out of control sometimes(like index zero in dex zero index zero....................shaking of fingers that's why............)
