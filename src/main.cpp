#include <Arduino.h>

#define VBUS_PIN PA1

const float VREF = 3.3f;
const float VBUS_RATIO = 19.15f;

void setup() {
    Serial.begin(115200);
    analogReadResolution(12);
}

void loop() {
    uint16_t adc = analogRead(VBUS_PIN);

    float adcVoltage = adc * VREF / 4095.0f;
    float busVoltage = adcVoltage * VBUS_RATIO;

    Serial.print(">ADC:");
    Serial.println(adc);

    Serial.print(">VBUS:");
    Serial.print(busVoltage, 2);
    Serial.println(" V");

    delay(100);
}