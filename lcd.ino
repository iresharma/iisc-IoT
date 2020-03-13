#include <LiquidCrystal.h>
//#define led LED_BUILTIN
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int trigPin = 7;  //D4
const int echoPin = 8;
float distance;
int duration;
String ppp = "99";

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);  
}

void loop() {
  analogWrite(9, 150);
  lcd.print(ppp);   
  delay(1000);
  lcd.clear();
  
}
