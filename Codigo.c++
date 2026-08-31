int sensoPin = 7;
int ledPin = 6;
bool estadoLed = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensoPin, INPUT);
}

void loop() {
  if (digitalRead(sensoPin) == HIGH) {
  estadoLed = !estadoLed;
  digitalWrite(ledPin, estadoLed);
  }else { 
    estadoLed = 0;
}
}
