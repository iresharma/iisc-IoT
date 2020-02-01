
int led1 = D1;
int led2 = D2;
int led3 = D3;
int led4 = D4;
int led5 = D5;
int led6 = D6;
int led7 = D7;
int led8 = D8;   
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char data = Serial.read();
  switch(data) {
    case '1':
      
      digitalWrite(D2, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D8, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D5, HIGH);
  digitalWrite(D7, HIGH);
      break;
    case '0': 
      
        digitalWrite(D1, LOW);
        digitalWrite(D3, LOW);
        digitalWrite(D5, LOW);
        digitalWrite(D7, LOW);
        digitalWrite(D2, HIGH);
        digitalWrite(D4, HIGH);
        digitalWrite(D6, HIGH);
        digitalWrite(D8, HIGH);
        break;
  }
}
