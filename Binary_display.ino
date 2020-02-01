
const int led1 = D1;
const int led2 = D2;
const int led3 = D3;
const int led4 = D4;
const int led5 = D5;
const int led6 = D6;
const int led7 = D7;
const int led8 = D8;

int binaryNum[8]={0}; 

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  for (int i = 0; i < 8; i++) {
      binaryNum[i] = LOW;
    }
    int i = 0;
    int n = 49; 
    while (n > 0) { 
  
        if(n%2 == 0) {
          binaryNum[i] = LOW;
        }
        else {
          binaryNum[i] = HIGH;
        }
        n = n / 2; 
        i++; 
    }
}

void loop() {
  digitalWrite(led1, binaryNum[0]);
  digitalWrite(led2, binaryNum[1]);
  digitalWrite(led3, binaryNum[2]);
  digitalWrite(led4, binaryNum[3]);
  digitalWrite(led5, binaryNum[4]);
  digitalWrite(led6, binaryNum[5]);
  digitalWrite(led7, binaryNum[6]);
  digitalWrite(led8, binaryNum[7]);
}
