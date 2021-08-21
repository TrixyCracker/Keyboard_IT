#include "Keyboard_IT.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  Keyboard.begin();

  delay(1000);
  
  Keyboard.print("|@#{}[]()\"");

}

void loop() {
  // put your main code here, to run repeatedly:

}
