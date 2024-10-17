#define DELAY 30

void setup(){
  for(int i = 0; i <= 19; i++){
    pinMode(i, OUTPUT);
  }
}
void loop(){
  for(int i = 0; i <= b; i++){
    digitalWrite(i, HIGH);
    delay(DELAY);
    digitalWrite(i, LOW);
    delay(DELAY);
  }
  for(int i = 0; i <= b; i++){
    digitalWrite(19 - i, HIGH);
    delay(DELAY);
    digitalWrite(19 - i, LOW);
    delay(DELAY);
  }
}
