#include "BluetoothSerial.h"
#define IN1 25
#define IN2 26
#define IN3 14
#define IN4 12
#define led1 16
#define led2 17
#define bzz 19
BluetoothSerial SerialBT;
char command;
void setup() {
    SerialBT.begin("ESP32_Wine_Exp");

    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);

    pinMode(bzz,OUTPUT);

    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}
void loop() {
  if (SerialBT.available() > 0) {
    command = SerialBT.read();
    if (command == 'F') {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }
    else if (command == 'B') {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    }
    else if (command == 'L') {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }
    else if (command == 'R') {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    }
    else if (command == 'S') {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
    }
    if (command == 'X') {
      digitalWrite(led1,HIGH);
    }
    else if (command == 'Y') {
      digitalWrite(led1,LOW);
    }
    if (command == 'N') {
      digitalWrite(led2,HIGH);
    }
    else if (command == 'n') {
      digitalWrite(led2,LOW);
    }
    if (command == 'M') {
      digitalWrite(bzz,HIGH);
    }
    else if (command == 'm') {
      digitalWrite(bzz,LOW);
    }
  }
}