#define RED 11
#define YELLOW 12
#define GREEN 13

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  //RED
  digitalWrite(RED, HIGH);   
  delay(5000);              
  blink(YELLOW, 3);
  digitalWrite(RED, LOW);    

  //YELLOW
  digitalWrite(YELLOW, HIGH);   
  delay(1000);             
  digitalWrite(YELLOW, LOW);    

  //GREEN
  digitalWrite(GREEN, HIGH);   
  delay(5000);              
  digitalWrite(GREEN, LOW);   
  blink(GREEN, 3);

}

void blink(int port, int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(port, HIGH);
    delay(500);
    digitalWrite(port, LOW);
    delay(250);
  }
}

