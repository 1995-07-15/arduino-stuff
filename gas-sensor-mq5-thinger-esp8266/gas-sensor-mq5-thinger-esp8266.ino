#include <SPI.h>
#include <ESP8266WiFi.h>
#include <ThingerWifi.h>

// get Thinger and Wifi credentials/config from external file
#include "credentials.h"

// The input pin ID for the MQ5 sensor
#define MQ5_PIN A0

ThingerWifi thing(THINGER_USER_ID, THINGER_DEVICE_ID, THINGER_DEVICE_CREDENTIALS);

void setup() {
  pinMode(MQ5_PIN, INPUT);
  thing.add_wifi(WIFI_SSID, WIFI_PASSWORD);
  thing["millis"] >> outputValue(millis());
  thing["gas_concentration_raw"] >> outputValue(analogRead(MQ5_PIN));
}

void loop() {
  thing.handle();
}
