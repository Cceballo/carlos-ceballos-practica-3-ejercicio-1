/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: LED RGB
   Dev: CARLOS CEBALLOS
   Fecha: 14/04/2023
*/
#define LEDr 4
#define LEDg 5
#define LEDb 6
#define BUTTON  2
#define BUTTON1 3


void setup() {
  pinMode(LEDr , OUTPUT);
 pinMode(LEDg, OUTPUT);
 pinMode(LEDb, OUTPUT);
 pinMode(BUTTON, INPUT);
 pinMode(BUTTON1,INPUT);

}

void loop() {
  digitalWrite(LEDr,HIGH);
 delay(500);
 digitalWrite(LEDr,LOW);
 delay(500);
 digitalWrite(LEDg,HIGH);
 delay(500);
 digitalWrite(LEDg,LOW);
 delay(500);
 digitalWrite(LEDb,HIGH);
 delay(500);
  digitalWrite(LEDb,LOW);
 delay(500);

 
 if(digitalRead(BUTTON)==HIGH&& digitalRead(BUTTON1)==LOW){ 
 
digitalWrite(LEDr,HIGH);
digitalWrite(LEDg,HIGH);
digitalWrite(LEDb,LOW);
}

 
 if(digitalRead(BUTTON)==HIGH&& digitalRead(BUTTON1)==LOW){ 
 
digitalWrite(LEDr,HIGH);
digitalWrite(LEDg,HIGH);
digitalWrite(LEDb,LOW);
}

 
 if(digitalRead(BUTTON)==HIGH&& digitalRead(BUTTON1)==HIGH){ 
 
digitalWrite(LEDr,LOW);
digitalWrite(LEDg,HIGH);
digitalWrite(LEDb,HIGH);
}

}

 
