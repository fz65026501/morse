
void setup(){
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
	Serial.begin(9600);
  
  digitalWrite(8,LOW);
  delay(10);
   digitalWrite(9,LOW);
  delay(10);
   digitalWrite(10,LOW);
  delay(10);
   digitalWrite(11,LOW);
  delay(10);
      digitalWrite(5,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      
  digitalWrite(8,HIGH);
  delay(10);
      digitalWrite(5,HIGH);
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      
  digitalWrite(9,HIGH);
  delay(10);
   delay(10);
      digitalWrite(5,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
   digitalWrite(10,HIGH);
  delay(10);
      digitalWrite(5,LOW);
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
}


void loop(){
 
    
}