#define BLYNK_PRINT Serial
 
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>
 
char auth[] = "TeiQ_tBsHusrA7-LhfdVM_6P-X_H5lst";
 
char ssid[] = "iresharma";
char pass[] = "iresharma88";

const int trigPin = D1;  //D4
const int echoPin = D2;
long distance;
int duration;


#define DHTPIN D3          
 
#define DHTTYPE DHT11     
 
DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;
void sendSensor()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
 
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Blynk.virtualWrite(V5, t);
  Blynk.virtualWrite(V6, h);
  Blynk.virtualWrite(V7, distance);
}
 
void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
   pinMode(echoPin, INPUT);
 
  Blynk.begin(auth, ssid, pass);
  dht.begin();
 
  timer.setInterval(1000L, sendSensor);
}


 
void loop()
{
   digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
 
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
  Blynk.run();
  timer.run();
}
