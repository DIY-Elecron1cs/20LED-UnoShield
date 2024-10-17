#define DELAY 30

void setup(){
  for(int i = 0; i <= 19; i++){
    pinMode(i, OUTPUT);
  }
}
void loop(){
  for(int i = 0; i <= b; i++){
    digitalWrite(i, LOW);
    digitalWrite(19 - i, LOW);
    delay(DELAY);
    digitalWrite(i, HIGH);
    digitalWrite(19 - i, HIGH);
   delay(DELAY);
  }
}
