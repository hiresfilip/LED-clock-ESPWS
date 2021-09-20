/*#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}*/




#include "ESP8266WiFi.h"

const char* ssid = "TP-Link_7632"; //Enter SSID
const char* password = "Kked9173"; //Enter Password

void setup(void)
{ 
  Serial.begin(115200);
  // Connect to WiFi
  /*WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) 
  {
     delay(500);
     Serial.print("*");
  }
  
  Serial.println("");
  Serial.println("WiFi connection Successful");
  Serial.print("The IP Address of ESP8266 Module is: ");
  Serial.print(WiFi.localIP());// Print the IP address*/
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println("MONITOR FUNGUJE!!!!");
}

void loop() 
{
  // EMPTY
  //Serial.print("MONITOR FUNGUJE LOOP!!!!");
}