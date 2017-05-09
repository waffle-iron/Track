// DEFINE CONSTANT VARIABLES
const int buttonPin = 2;
const int ledPin =  13;

// variables will change:
int buttonState = 0;
int location = 1000;
int sensorPin = A0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    sensorPin = analogRead(sensorPin);
    digitalWrite(ledPin, HIGH);
    delay(1);
    digitalWrite(ledPin, LOW);
    delay(2);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
