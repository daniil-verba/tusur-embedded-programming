#define PIN_GREEN 5
#define PIN_YELLOW 6
#define PIN_RED 7

#define TIME_GREEN_STEADY 5000      // Зелёный горит
#define TIME_BLINK_ON_OFF 1000      // Длительность вкл/выкл при мигании
#define TIME_YELLOW_STEADY 2000     // Жёлтый горит
#define TIME_RED_STEADY 5000        // Красный горит
#define TIME_RED_YELLOW_STEADY 2000 // Красный и жёлтый вместе

void flud(int pin) {
  for (int i = 0; i < 3; i++) {
    digitalWrite(pin, HIGH);
    delay(TIME_BLINK_ON_OFF);
    digitalWrite(pin, LOW);
    delay(TIME_BLINK_ON_OFF);
  }
}

void setup() {
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_YELLOW, OUTPUT);
  pinMode(PIN_RED, OUTPUT);
}

void loop() {
  // 1. Зелёный горит (5 с)
  digitalWrite(PIN_GREEN, HIGH);
  delay(TIME_GREEN_STEADY);
  digitalWrite(PIN_GREEN, LOW);

  // 2. Зелёный мигает 3 раза
  flud(PIN_GREEN);

  // 3. Жёлтый горит (2 с)
  digitalWrite(PIN_YELLOW, HIGH);
  delay(TIME_YELLOW_STEADY);
  digitalWrite(PIN_YELLOW, LOW);

  // 4. Красный горит (5 с)
  digitalWrite(PIN_RED, HIGH);
  delay(TIME_RED_STEADY);

  // 5. Красный и жёлтый вместе (2 с)
  digitalWrite(PIN_YELLOW, HIGH);
  delay(TIME_RED_YELLOW_STEADY);

  // Сброс состояний перед новым циклом
  digitalWrite(PIN_RED, LOW);
  digitalWrite(PIN_YELLOW, LOW);
}