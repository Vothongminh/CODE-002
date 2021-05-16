
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "****************";    //Mã auth (gửi về mail)
char ssid[] = "****************";    //Tên wifi
char pass[] = "****************";    //Mật khẩu wifi
void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop() {
  Blynk.run();
}
