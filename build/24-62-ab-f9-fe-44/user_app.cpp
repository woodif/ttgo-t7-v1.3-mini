#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiAP.h>
#include <WebServer.h>







void setup()
{
  
  pinMode(22,OUTPUT);
}
void loop()
{
    digitalWrite(22,1);
  delay(1000);
  digitalWrite(22,0);
  delay(1000);

  
}
