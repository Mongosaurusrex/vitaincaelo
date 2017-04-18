String inputString = "";
boolean stringComplete = false;

void setup() {
  Serial.begin(9600);
  inputString.reserve(200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (stringComplete) {
    Serial.println(inputString);
    inputString = "";
    stringComplete = false;
  }
}
void serialEvent() {
  while (Serial.available()) {
    
    char inChar = (char)Serial.read();
    digitalWrite(LED_BUILTIN, HIGH);
    inputString += inChar;
    if (inChar == '\n') {
      stringComplete = true;
      digitalWrite(LED_BUILTIN, LOW);
    }
  }
}