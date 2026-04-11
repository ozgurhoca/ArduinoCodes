int led=6;
int pot=A0;
int potOkunan;

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potOkunan=analogRead(A0); //okunan değer 0-1023 arasında
  int isikSiddeti=map(potOkunan,0,1023,0,255);
  analogWrite(led,isikSiddeti); //yazılan değer 0-255 arasında
  Serial.print("potansiyometre:");
  Serial.print(potOkunan);
  Serial.print("   led:");
  Serial.println(isikSiddeti);
  delay(50);
}