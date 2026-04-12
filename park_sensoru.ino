#define trig 8
#define echo 9
#define buz 6

void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buz,OUTPUT);
}
void loop() {
  digitalWrite(trig,HIGH);
  delayMicroseconds(15);
  digitalWrite(trig,LOW);
  int sure=pulseIn(echo,HIGH);
  int mesafe=sure*0.0343/2;
  Serial.println(mesafe);
  delay(50);
  if (mesafe<=7){
    digitalWrite(buz, HIGH);
  }
  else {
    if (mesafe<=12){
      digitalWrite(buz, HIGH);
      delay(50);
      digitalWrite(buz, LOW);
      delay(50);
    }
    else {
      if (mesafe<=20){
        digitalWrite(buz, HIGH);
        delay(100);
        digitalWrite(buz, LOW);
        delay(100);
      }
      else {
        digitalWrite(buz, LOW);
      }
    }
  }
}