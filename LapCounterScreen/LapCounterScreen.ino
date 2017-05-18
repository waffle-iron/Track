// -----------------------------------------------------------------------
// -- Test the 7-Segment Display
// -----------------------------------------------------------------------
byte mynumbers[ ] = {
B11011110, // 0 
B10000010, // 1
B11101100, // 2
B11100110, // 3
B10110010, // 4
B01110110, // 5
B01111110, // 6
B11000010, // 7
B11111110, // 8
B11110110, // 9
B00000000  // End of array
};

void setup() {
  // put your setup code here, to run once:
DDRD = B11111111;
int i;
for(i=0; i<3; i++){
tone(8,1000,50);
delay(150);
}
}

void loop() {
  // put your main code here, to run repeatedly:
int i;
 DDRD = B11111111;
for(i=0; i< 10; i++){
  PORTD = mynumbers[ i ];
  tone(8,1000,50);
  delay(1000);
}
}﻿
