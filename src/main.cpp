//Developed by ealvess
//heltec wifi lora 32 v2 skecht.
#include <Arduino.h>
#include <heltec.h>

int myFunction(int, int);

void setup() {
  Heltec.begin(true /*DisplayEnable Enable*/, true /*LoRa Disable*/, true /*Serial Enable*/, true /*PABOOST Enable*/, 470E6 /**/);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}