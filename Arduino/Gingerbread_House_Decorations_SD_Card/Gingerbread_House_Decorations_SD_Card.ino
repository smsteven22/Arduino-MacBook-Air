#include <SD.h>
File dataFile = SD.open("Gingerbread_House_Decorations.ino");
void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
if (dataFile) {
  while (dataFile.available()) {
    Serial.write(dataFile.read());
  }
  dataFile.close();
}

else {
  // if the file isn't open, pop up an error:
}
}
