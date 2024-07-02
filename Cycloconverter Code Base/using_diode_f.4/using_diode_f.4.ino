int pos = 2;
int neg = 3;
int T = 40;
void setup() {
 
pinMode(pos,OUTPUT);
pinMode(neg,OUTPUT);
}

void positive_on (){
  digitalWrite(pos,HIGH);
  digitalWrite(neg,LOW);
}
void negative_on (){
  digitalWrite(neg,HIGH);
  digitalWrite(pos,LOW);
}

void loop() {
  positive_on();
  delay (T);
  negative_on();
  delay(T);
}
