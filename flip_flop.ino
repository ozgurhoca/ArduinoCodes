int buz=6;

void setup() {
  pinMode(buz,OUTPUT);
}
void loop() {
  tone(buz,500); //20-20000
  delay(500);
  tone(buz,1500);
  delay(500);
  tone(buz,2500);
  delay(500);
}