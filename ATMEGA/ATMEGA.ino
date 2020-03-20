#include "Config.h"

void setup() {
  pinMode(T_inPin, INPUT);
  pinMode(T_outPin, INPUT);

  Serial.begin(BAUD);
  while(!Serial.available());

  
}

void loop() {
  
}
