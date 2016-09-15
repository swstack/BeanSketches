#define START_FRAME 0x77
#define COMMAND_SERIAL_BINARY 0
#define COMMAND_SERIAL_ASCII 1
#define COMMAND_SERIAL_LONG 2


// Data definitions
uint8_t binaryData[3] = {1, 2, 3};
char *shortStr = "foo";
char *longStr = "111222333444555666777888999";

void setup() {
  Serial.begin();
}


void sendCommand(int command) {
  switch (command) {
    case COMMAND_SERIAL_BINARY:
      Serial.write(binaryData, 3);
      break;
    case COMMAND_SERIAL_ASCII:
      Serial.write(shortStr);
      break;
    case COMMAND_SERIAL_LONG:
      Serial.write(longStr);
      break;
    default:
      break;
  }

  Serial.flush();
}


void loop() {

  sendCommand(COMMAND_SERIAL_BINARY);
  Bean.sleep(1000);
  sendCommand(COMMAND_SERIAL_ASCII);
  Bean.sleep(1000);
  sendCommand(COMMAND_SERIAL_LONG);

  Bean.sleep(5000);
}
