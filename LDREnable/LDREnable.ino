const int trackPin = 9; // GPIO pin connected to the MOSFET that controls the track's power.

// GPIO pins connected to the LDRs mounted to the track.
const int LDR1 = A0;
const int LDR2 = A1;
const int LDR3 = A2;
const int LDR4 = A3;

// Initialise raw LDR output variables.
int LDR1Value = 0;
int LDR2Value = 0;
int LDR3Value = 0;
int LDR4Value = 0;

// Initialise LDR map conversion variables.
int LDR1Map= 0;
int LDR2Map = 0;
int LDR3Map = 0;
int LDR4Map = 0;

// Start the car at a speed of 325, and the lap count at 0.
int speed = 325;
int lapcount = 0;

void setup() {
  // The following line may not be needed, but is being kept until we're sure.
  Serial.begin(9600);
}

void loop() {
  LDR1Value = analogRead(LDR1);
  LDR2Value = analogRead(LDR2);
  LDR3Value = analogRead(LDR3);
  LDR4Value = analogRead(LDR4);
  
  LDR1Map = map(LDR1Value, 0, 1023, 0, 255);
  LDR2Map = map(LDR2Value, 0, 1023, 0, 255);
  LDR3Map = map(LDR3Value, 0, 1023, 0, 255);
  LDR4Map = map(LDR4Value, 0, 1023, 0, 255);

  if (LDR1Map < 10) { // If a car covers LDR1
    speed = 330; // Speed variable is changed to 330
  } else if (LDR2Map < 10){ // If a car covers LDR2
    speed = 353; // Speed variable is changed to 353
  } else if (LDR3Map < 10) { // If a car covers LDR3
    speed = 340; // Speed variable is changed to 340
  } else if (LDR4Map < 10) { // If a car covers LDR4
    speed = 353; // Speed variable is changed to 353
    lapcount++; // LDR4 is next to the start line so as it is covered, the lap count will be incremented by 1. 
  }

  analogWrite(trackPin, speed); // This writes the speed to the GPIO pin connected to the MOSFET on the breadboard. This regulates power to the track.

// OLD SERIAL OUTPUT COMMANDS - DO NOT UNCOMMENT!
// IF THIS IS UNCOMMENTED, THE LDRs WILL NOT BE READ FAST ENOUGH TO TAKE EFFECT.
/*
  Serial.println("   ");
  
  Serial.print("LDR1 Value: ");
  Serial.print(LDR1Value);
  Serial.print("\t Map ");
  Serial.print(LDR1Map);
  Serial.print("\t Speed: ");
  Serial.println(speed);
  
  Serial.print("LDR2 Value: ");
  Serial.print(LDR2Value);
  Serial.print("\t Map ");
  Serial.print(LDR2Map);
  Serial.print("\t Speed: ");
  Serial.println(speed);
  
  Serial.print("LDR3 Value: ");
  Serial.print(LDR3Value);
  Serial.print("\t Map ");
  Serial.print(LDR3Map);
  Serial.print("\t Speed: ");
  Serial.println(speed);
  
  Serial.print("LDR4 Value: ");
  Serial.print(LDR4Value);
  Serial.print("\t Map ");
  Serial.print(LDR4Map);
  Serial.print("\t Speed: ");
  Serial.println(speed);
*/

  delay(1); // Read the LDR values as fast as possible, as often as possible.
}
