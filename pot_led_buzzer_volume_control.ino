int buz=6; // led takılacaksa buz yerine led yazın ve alt satırlarda bulunan tüm 2buz2ları led olarak değiştirin
int pot=A0;
int potOkunan;

void setup() {
  pinMode(buz,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potOkunan=analogRead(A0); //0-1023
  int sesSiddeti=map(potOkunan,0,1023,0,255);
  analogWrite(buz,sesSiddeti); //0-255
  Serial.print("potansiyometre:");
  Serial.print(potOkunan);
  Serial.print("   buzzer:");
  Serial.println(sesSiddeti);
  delay(50);
}