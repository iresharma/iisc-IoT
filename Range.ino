
const int trigPin = D7;  //D4
const int echoPin = D8;
float distance;
int duration;



const int led1 = D1;
const int led2 = D2;
const int led3 = D3;
const int led4 = D4;
const int led5 = D5;
const int led6 = D6;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);
  
}

void loop() {
  Serial.begin(9600);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
 
distance= duration*0.034/2;
Serial.write("%f",distance);
  if(distance <= 3.3) {
  digitalWrite(led1, HIGH);
    
  }
  else if (distance <= 6.6) {
    
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  }
  else if (distance <= 9.9) {
    
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  
  }
  else if (distance <= 13.2) {
    
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  }
  else if (distance <= 16.8) {
    
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  }
  else {
    
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  }
  delay(1000);
  
}
