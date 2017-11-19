const int Pin6 = 6;    // connected to the base of the transistor
const int Pin9 = 9;    // connected to the base of the transistor
const int Pin10 = 10;    // connected to the base of the transistor
const int Pin11 = 11;    // connected to the base of the transistor

void setup() {
   // set  the transistor pin as output:
   pinMode(Pin6, OUTPUT);
   pinMode(Pin9, OUTPUT);
   pinMode(Pin10, OUTPUT);
   pinMode(Pin11, OUTPUT);
 }
 
 void loop() {
  int del=1000;
   digitalWrite(Pin6, HIGH);
   digitalWrite(Pin9, LOW);
   delay(del);
   digitalWrite(Pin10, HIGH);
   digitalWrite(Pin11, LOW);
   delay(del);
   digitalWrite(Pin6, LOW);
   digitalWrite(Pin9, HIGH);
   delay(del);
   digitalWrite(Pin10, LOW);
   digitalWrite(Pin11, HIGH);
   delay(del);
 }
