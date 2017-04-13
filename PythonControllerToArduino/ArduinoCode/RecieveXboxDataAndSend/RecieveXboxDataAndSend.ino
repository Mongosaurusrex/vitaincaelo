int incomingByte = 0;

void setup() {
  Serial.begin(9600);  
}

void loop() {
  String readString;
    while (Serial.available())
    {
      delay(1);
      if (Serial.available() >0)
      {
        char c = Serial.read();
        readString += c;
      }
    }
    Serial.println(readString);
}
