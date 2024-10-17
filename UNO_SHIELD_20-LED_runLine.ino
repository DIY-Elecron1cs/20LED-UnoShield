#define DELAY 30

void setup(){
  for(int i = 0; i <= 19; i++){
    pinMode(i, OUTPUT);
  }
}
void loop() {
  for (int i = 0; i <= 9; i++) {
    digitalWrite(i, HIGH);
    digitalWrite(19 - i, HIGH);
    delay(DELAY);
  }
  for (int j = 0; j <= 9; j++) {
    digitalWrite(j, LOW);
    digitalWrite(19 - j, LOW);
    delay(DELAY);
  }
}
