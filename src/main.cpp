#include <Arduino.h>

void setup() {
    Serial.begin(250000);
}

void loop() {
    int adcValue = analogRead(PA0);

    Serial.print("ADC: ");
    Serial.println(adcValue);

    delay(100);
}