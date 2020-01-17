#include "MD5_String.h"
String incoming = "";
void setup() {
  Serial.begin(9600);
  Serial.println("hello");
}
void loop() { // run over and over
  if (Serial.available()) {
    //    Serial.write(Serial.read());
    incoming = Serial.readString();
    //Serial.println(incoming);
    String hash = md5_string(string2char(incoming));
    Serial.println(hash);
  }
}
char* string2char(String command) {
  if (command.length() != 0) {
    char *p = const_cast<char*>(command.c_str());
    return p;
  }
}
