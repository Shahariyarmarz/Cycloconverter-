int P2=3;
int P3=4;
int P4=5;
int N1=6;
int N2=7;
int N3=8;
int N4=9;
int choice;
void setup() {
pinMode(P1,OUTPUT);
pinMode(P2,OUTPUT);
pinMode(P3,OUTPUT);
pinMode(P4,OUTPUT);
pinMode(N1,OUTPUT);
pinMode(N2,OUTPUT);
pinMode(N3,OUTPUT);
pinMode(N4,OUTPUT);
}
void Positive_on_1() {
  digitalWrite(P1,HIGH);
  digitalWrite(P2,HIGH);
}
void Positive_off_1(){
  digitalWrite(P1,LOW);
  digitalWrite(P2,LOW);
}
void Positive_on_2() {
  digitalWrite(P3,HIGH);
  digitalWrite(P4,HIGH);
}
void Positive_off_2() {
  digitalWrite(P3,LOW);
  digitalWrite(P4,LOW);
}
void Negative_on_1() {
  digitalWrite(N1,HIGH);
  digitalWrite(N2,HIGH);
}
void Negative_off_1() {
  digitalWrite(N1,LOW);
  digitalWrite(N2,LOW);
}
void Negative_on_2() {
  digitalWrite(N3,HIGH);
  digitalWrite(N4,HIGH);
}
void Negative_off_2() {
  digitalWrite(N3,LOW);
  digitalWrite(N4,LOW);
}

void loop() {
Positive_on_1();
delay(10);
Positive_off_1();
Positive_on_2();
delay(10);
Positive_off_2();
Positive_on_1();
delay(10);
Positive_off_1();
Positive_on_2();
delay(10);
Positive_off_2();
Positive_on_1();
delay(10);
Positive_off_1();
Positive_on_2();
delay(10);
Positive_off_2();
Negative_on_1();
delay(10);
Negative_off_1();
Negative_on_2();
delay(10);
Negative_off_2();
Negative_on_1();
delay(10);
Negative_off_1();
Negative_on_2();
delay(10);
Negative_off_2();
Negative_on_1();
delay(10);
Negative_off_1();
Negative_on_2();
delay(10);
Negative_off_2();
}
