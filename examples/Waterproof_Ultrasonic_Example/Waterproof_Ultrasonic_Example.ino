#include <Waterproof_Ultrasonic.h>


Waterproof_Ultrasonic cambien(11,12,3);

void setup() {
  Serial.begin(9600);
}

void loop() {
  uint16_t value = cambien.read();
  if(value) Serial.println("Testing with MODE " + String(cambien.getMode()) + ", R27 = " + cambien.getR27() + ", value = " + String(value) + " cm");
  delay(500);
}
