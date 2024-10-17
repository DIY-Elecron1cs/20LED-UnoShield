#define DELAY 30
void setup(){
  for(int i = 0; i <= 19; i++){
    pinMode(i, OUTPUT);
  }
}
void loop(){
  for(int i = 0; i <= 10; i++){
    digitalWrite(i, HIGH);
    digitalWrite(i + 10, HIGH);
    delay(DELAY);
    digitalWrite(i - 1, HIGH);
    digitalWrite(i + 9, HIGH);
  }
}
