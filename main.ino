#include <OneWire.h>
#include <DallasTemperature.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "XoneZZZZzzz...";
const char* password = "sojoljane";

void ds18b20(int pin, String name){
  float temprature;
  OneWire oneWire(pin);
  DallasTemperature sensors(&oneWire);
  sensors.begin();
  sensors.requestTemperatures(); 
  temprature=sensors.getTempCByIndex(0);
    if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin("http://becm-shm.online/test/index.php?sensor_name="+name+"&pin="+pin+"&temprature="+temprature); 
    int httpCode = http.GET();                                                                 
    if (httpCode > 0) { 
      String payload = http.getString();   
      if(payload=="ok"){
        Serial.print("Sended to the server ");
        digitalWrite(16,HIGH);
        delay(1000);
        digitalWrite(16,LOW);                  
      }
    }
    http.end();   
  }
  else{
    Serial.print("No Wi-Fi connection ");
  }

  Serial.print("DS18B20 sensor name:");
  Serial.print(name);
  Serial.print(" Temperature:");
  Serial.println(temprature);

  delay(2000); 
}

void setup () {
  pinMode(16,OUTPUT);
  Serial.begin(9600);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print("Connecting..");
  }
  Serial.println("Connected.. *_*");
}

void loop() {
  Serial.println("------------------------------------------START-----------------------------------------------");
  ds18b20(2,  "DS18B20_1");
  ds18b20(3,  "DS18B20_2");
  ds18b20(4,  "DS18B20_3");
  ds18b20(10, "DS18B20_4");
  ds18b20(12, "DS18B20_5");
  ds18b20(14, "DS18B20_6"); 
  Serial.println("------------------------------------------END-------------------------------------------------");
}
