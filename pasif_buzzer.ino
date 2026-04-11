int buz=6;
int pot=A0;
int potOkunan;

void setup() {
  pinMode(buz,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potOkunan=analogRead(A0); //okunan değer 0-1023 arasında
  int sesSiddeti=map(potOkunan,0,1023,0,255);
  analogWrite(buz,sesSiddeti); //yazılan değer 0-255 arasında
  Serial.print("potansiyometre:");
  Serial.print(potOkunan);
  Serial.print("   buzzer:");
  Serial.println(sesSiddeti);
  delay(50);
}