int potPin = A3;   // select the input pin for the potentiometer
int lightPin = A5;
int powerPin = 10;
int relayPin = 8;

void setup() {
  pinMode(powerPin, OUTPUT);     
  pinMode(relayPin, OUTPUT);
  digitalWrite(powerPin, HIGH);
  digitalWrite(relayPin, LOW);
}

void loop() {
  int lightPinVal = analogRead(lightPin);
  int potPinVal = analogRead(potPin);
  if (lightPinVal < potPinVal) {
    digitalWrite(relayPin, LOW);
  } else {
    digitalWrite(relayPin, HIGH);
  }
  delay(200);
}
