#define pir 8
#define led 3
#define ldr 4

void setup() {
  pinMode(pir, INPUT);
  pinMode(led,OUTPUT);
  pinMode(ldr, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop() {
  Serial.print("pir: ");
  Serial.println(digitalRead(pir));
  Serial.print("ldr: ");
  Serial.println(digitalRead(ldr));
  delay(100);
  
    if (digitalRead(pir)==HIGH && digitalRead(ldr)==HIGH){ 
      digitalWrite(led,HIGH);
    }
    else{
      digitalWrite(led,LOW);
    }
}