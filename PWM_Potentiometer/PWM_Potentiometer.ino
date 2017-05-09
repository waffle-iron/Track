const int analogInPin = A0;
const int MotorPinSet = 9;

int sensorValue = 0;
int outputValue = 0;
int count = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(MotorPinSet, outputValue);

  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
  sensorValue = count++;

  delay(20000);
}