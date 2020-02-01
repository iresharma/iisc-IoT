
int led1 = D1;
int led2 = D2;
int led3 = D3;
int led4 = D4;
int led5 = D5;
int led6 = D6;
int led7 = D7;
int led8 = D8;      
int brightness = 0;   
int fadeAmount = 10;    
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led1, brightness);
  analogWrite(led2, brightness);
  analogWrite(led3, brightness);
  analogWrite(led4, brightness);
  analogWrite(led5, brightness);
  analogWrite(led6, brightness);
  analogWrite(led7, brightness);
  analogWrite(led8, brightness);

  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= HIGH) {
    fadeAmount = -fadeAmount;
  }\
  delay(30);
}
