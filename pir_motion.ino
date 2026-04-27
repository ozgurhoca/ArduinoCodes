#define pir 8
#define ledbuz 3

void setup() {
  pinMode(pir, INPUT);
  pinMode(ledbuz,OUTPUT);

}

void loop() {
  if (digitalRead(pir)==HIGH){
    digitalWrite(ledbuz,HIGH);
  }
  else{
    digitalWrite(ledbuz,LOW);
  }

}