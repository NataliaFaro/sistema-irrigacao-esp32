#include <Arduino.h>
#include <DHT.h>

#define BOTAO_N 14
#define BOTAO_P 27
#define BOTAO_K 26
#define PINO_LDR 34
#define PINO_DHT 15
#define LED_BOMBA 2

#define DHTTYPE DHT22
DHT dht(PINO_DHT, DHTTYPE);

void setup() {
  pinMode(BOTAO_N, INPUT_PULLUP);
  pinMode(BOTAO_P, INPUT_PULLUP);
  pinMode(BOTAO_K, INPUT_PULLUP);
  pinMode(LED_BOMBA, OUTPUT);
  digitalWrite(LED_BOMBA, LOW);
  dht.begin();
}

void loop() {
  bool N = digitalRead(BOTAO_N) == LOW;
  bool P = digitalRead(BOTAO_P) == LOW;
  bool K = digitalRead(BOTAO_K) == LOW;

  float umidade = dht.readHumidity();
  int ldr = analogRead(PINO_LDR);

  // condição simples e fácil
  if (N && P && K && umidade < 40 && ldr > 100) {
    digitalWrite(LED_BOMBA, HIGH);
  } else {
    digitalWrite(LED_BOMBA, LOW);
  }

  delay(500);
}