#define r 9
#define g 10
#define b 11

void setup() {
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
}
void loop() {
  //ortak anot için 255'leri 0, 0'ları 255 yapın
  analogWrite(r,255);
  analogWrite(g,0);
  analogWrite(b,0);
  delay(500);           
  analogWrite(r,0);
  analogWrite(g,255);
  analogWrite(b,0);
  delay(500);
  analogWrite(r,0);
  analogWrite(g,0);
  analogWrite(b,255);
  delay(500);
}