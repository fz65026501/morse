#include <stdio.h>
int pin = 13;
int _pin=pin;
int incomingByte=0;
int _dottime=250;   

void dot() {  
  digitalWrite(_pin,HIGH);
  delay(_dottime);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}  
void dash() { 
  digitalWrite(_pin,HIGH);
  delay(_dottime*4);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}
void cs(){
  digitalWrite(_pin,LOW);
  delay(_dottime*3);
 }
void ws(){
digitalWrite(_pin,LOW);
 delay(_dottime*4);
}

void zifuchuli(int b){
 
  
    switch(char(b)){
      case 'a':dot();dash();
               cs();break;
      case 'b':dash();dot();dot();dot();
               cs();break;
      case 'c':dash();dot();dash();dot();
               cs();break;
      case 'd':dash();dot();dot();
               cs();break;
      case 'e':dot();
               cs();break;
      case 'f':dot();dot();dash();dot();
               cs();break;
      case 'g':dash();dash();dot();
               cs();break;
      case 'h':dot();dot();dot();dot();
               cs();break;
      case 'i':dot();dot();
               cs();break;
      case 'j':dot();dash();dash();dash();
               cs();break;
      case 'k':dash();dot();dash();
               cs();break;
      case 'm':dash();dash();
               cs();break;
      case 'n':dash();dot();
               cs();break;
      case 'o':dash();dash();dash();
               cs();break;
      case 'p':dot();dash();dash();dot();
               cs();break;
      case 'q':dash();dash();dot();dash();
               cs();break;
      case 'r':dot();dash();dot();
               cs();break;
      case 's':dot();dot();dot();
               cs();break;
      case 't':dash();
               cs();break;
      case 'u':dot();dot();dash();
               cs();break;
      case 'v':dot();dot();dot();dash();
               cs();break;
      case 'w':dot();dash();dash();
               cs();break;
      case 'x':dash();dot();dot();dash();
               cs();break;
      case 'y':dash();dot();dash();dash();
               cs();break;
      case 'z':dash();dash();dot();dot();
               cs();break;
      case ' ':dot();
               ws();break;
      default:dot();
               ws();
    }
}
void setup() {     
  pinMode(_pin, OUTPUT); 
  Serial.begin(9600);
}   
void loop() { 
  if(Serial.available()>0){
    incomingByte=Serial.read();
    zifuchuli(incomingByte);
  }
}   