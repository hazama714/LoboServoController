#include <Servo.h>

const int NUM_SERVOS = 8;
Servo servos[NUM_SERVOS];

String inputString = "";
bool stringComplete = false;

void setup() {
  Serial.begin(115200);

  // 各サーボのピンを設定（必要に応じて変更）
  servos[0].attach(3);
  servos[1].attach(5);
  servos[2].attach(6);
  servos[3].attach(9);
  servos[4].attach(10);
  servos[5].attach(11);
  servos[6].attach(12);
  servos[7].attach(13);

  inputString.reserve(20);
}

void loop() {
  if (stringComplete) {
    parseAndExecute(inputString);
    inputString = "";
    stringComplete = false;
  }
}

void serialEvent() {
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    if (inChar == '\n') {
      stringComplete = true;
    } else {
      inputString += inChar;
    }
  }
}

void parseAndExecute(String command) {
  // 例：#3 P135
  if (!command.startsWith("#")) return;

  int hashIndex = command.indexOf('#');
  int pIndex = command.indexOf('P');

  if (pIndex == -1 || pIndex < hashIndex) return;

  int index = command.substring(hashIndex + 1, pIndex).toInt();
  int angle = command.substring(pIndex + 1).toInt();

  if (index >= 0 && index < NUM_SERVOS && angle >= 0 && angle <= 180) {
    servos[index].write(angle);
  }
}
