#define led 8
int okunan;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop() {
  okunan=analogRead(A0);
  Serial.println(okunan);
  if (okunan<20) {  // 20 değeri ldr'den gelen analog sinyale göre belirlenmiştir
    digitalWrite(led,HIGH);
  }
  else {
    digitalWrite(led,LOW);
  }
}
