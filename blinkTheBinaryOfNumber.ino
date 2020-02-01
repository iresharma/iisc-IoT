
const int ledPin =  LED_BUILTIN;
int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 1000;


int binaryNum[6]; 

int binary() {
  
    int i = 0;
    int n = 45; 
    while (n > 0) { 
  
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
}

void setup() {
  pinMode(ledPin, OUTPUT);
}



void loop() {
  for(int i = sizeof(binaryNum) - 1; i >= 0 ; i++) {
    digitalWrite(ledPin, binaryNum[i]);
    delay(500);
  }
}
