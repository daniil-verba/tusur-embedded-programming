#include <Arduino.h>

#define RED_PIN 5
#define YELLOW_PIN 6
#define GREEN_PIN 7

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  // Красный
  digitalWrite(RED_PIN, HIGH);
  delay(400);
  digitalWrite(RED_PIN, LOW);
  
  // Жёлтый
  digitalWrite(YELLOW_PIN, HIGH);
  delay(400);
  digitalWrite(YELLOW_PIN, LOW);
  
  // Зелёный
  digitalWrite(GREEN_PIN, HIGH);
  delay(400);
  digitalWrite(GREEN_PIN, LOW);
}