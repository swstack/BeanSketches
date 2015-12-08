int incomingByte = 0;

void setup() {
}

void loop() {
    if (Serial.available() > 0) {
        incomingByte = Serial.read();
        Serial.write(incomingByte);
    }
}
