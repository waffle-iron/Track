const int LDR1 = A0;
const int LDR2 = A1;
const int LDR3 = A2;
const int LDR4 = A3;

int LDR1Value = 0;
int LDR2Value = 0;
int LDR3Value = 0;
int LDR4Value = 0;

int LDR1Map= 0;
int LDR2Map = 0;
int LDR3Map = 0;
int LDR4Map = 0;

void setup() {
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

  Serial.println("   ");
  Serial.print("LDR1 Value: ");
  Serial.print(LDR1Value);
  Serial.print("\t Map ");
  Serial.println(LDR1Map);
  Serial.print("LDR2 Value: ");
  Serial.print(LDR2Value);
  Serial.print("\t Map ");
  Serial.println(LDR2Map);
  Serial.print("LDR3 Value: ");
  Serial.print(LDR3Value);
  Serial.print("\t Map ");
  Serial.println(LDR3Map);
  Serial.print("LDR4 Value: ");
  Serial.print(LDR4Value);
  Serial.print("\t Map ");
  Serial.println(LDR4Map);
  
  delay(1000);
}
