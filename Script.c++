#include<ArduinoJson.h>
#define trigger 7
#define echo 6
#include <DHT.h>
#include<ArduinoJson.h>
#define dhtpin 4
#define dhttype DHT11 

DHT dht(dhtpin, dhttype);

int dist = 0;

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {

  int temp  = dht.readTemperature();
  int umi = dht.readHumidity();

  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  dist = pulseIn(echo, HIGH);
  dist /= 58;
  
  StaticJsonDocument<100>json;

  json["Distancia"] = dist;
  json["Temperatura"] = temp;
  json["Umidade"] = umi;

  serializeJson(json, Serial);
  Serial.println();
  delay(3000);

}

