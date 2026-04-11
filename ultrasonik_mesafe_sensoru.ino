#define trig 8
#define echo 9

void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}
void loop() {
  digitalWrite(trig,HIGH);
  delayMicroseconds(15);
  digitalWrite(trig,LOW);
  int sure=pulseIn(echo,HIGH);
  int mesafe=sure*0.0343/2;
  Serial.println(mesafe);
  delay(50);
}
