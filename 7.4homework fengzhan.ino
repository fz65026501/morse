int income=0;
void setPin(int a,int b){
	if(b&0x1)
		digitalWrite(a,HIGH);
	
	else
		digitalWrite(a,LOW);
}
void setup(){
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
    pinMode(7,OUTPUT);
	Serial.begin(9600);
 
  digitalWrite(7,LOW);
  delay(10);
  digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
}


void loop(){
	if(Serial.available()>0){
	income=Serial.read();
	income=income-'0';
	Serial.println(income,DEC);
    digitalWrite(7,LOW);
	delay(10);
	setPin(2,income&1);
	setPin(3,(income>>1)&0x1);
	setPin(4,(income>>2)&0x1);
	setPin(5,(income>>3)&0x1);
      delay(10);
      digitalWrite(7,HIGH);
	Serial.print(income&1);
    Serial.print((income>>1)&0x1);
    Serial.print((income>>2)&0x1);
    Serial.println((income>>3)&0x1);
    }
}