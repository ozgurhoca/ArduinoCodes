#define ses 2
#define led 13

void setup() {
  pinMode(led,OUTPUT);
  pinMode(ses,INPUT);
}
void loop() {
  if (digitalRead(2)==HIGH){
    if (digitalRead(13)==LOW){
      digitalWrite(led,HIGH);
    }
    else{
      digitalWrite(led,LOW);
    }
    delay(500);
  }
}