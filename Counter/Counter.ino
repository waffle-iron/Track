// DEFINE CONSTANT VARIABLES
const int analogInPin = A0;
const int analogOutPin = 9;

int ledPin = 13;
int sensorValue = 0;
int outputValue = 0;
int sensor2 = 0;
int count = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  digitalWrite(ledPin, HIGH);
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(analogOutPin, outputValue);
  sensor2 = sensorValue;
  // print the results to the serial monitor:
  if (outputValue < 230) {

    digitalWrite(ledPin, LOW);
    Serial.print('\n');
    Serial.print("lap = ");
    Serial.print(count);
    count++;



  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
    delay(200);
  }
}
