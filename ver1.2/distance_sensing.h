#include "pitches_for_distance_sensing.h"
long microsecondsToInches(long microseconds);
long microsecondsToCentimeters(long microseconds);

void distance_sensing(int trigPin,int echoPin,int buzzer1)
{
long duration, inches, cm;
pinMode(trigPin, OUTPUT); 
digitalWrite(trigPin, LOW); 
delayMicroseconds(2); 
digitalWrite(trigPin, HIGH); 
delayMicroseconds(10); 
digitalWrite(trigPin, LOW);
pinMode(echoPin, INPUT); 
duration = pulseIn(echoPin, HIGH);
//inches = microsecondsToInches(duration); 
cm = microsecondsToCentimeters(duration);
//Serial.print(inches); 
//Serial.print("in, "); 
Serial.print(cm);
Serial.print("cm"); 
Serial.println(); 
delay(100);

noTone(buzzer1);

if(cm>49){
  noTone(buzzer1);
  Serial.println("more than 49cm");
}

else if(cm>3 && cm <=7){
//buzzer1 C1
//noTone(buzzer1);
tone(buzzer1,NOTE_C3,1000);

delay(1000);
}

else if(cm>7 && cm <=14){
//buzzer1 C1
//noTone(buzzer1);
tone(buzzer1,NOTE_D3,1000 );
delay(500);
}
else if(cm>14 && cm <=21){
noTone(buzzer1);
tone(buzzer1,NOTE_E3,1000 );
delay(500);
}
else if(cm>21 && cm <=28){
noTone(buzzer1);
tone(buzzer1,NOTE_F3,1000 );
delay(500);
}
else if(cm>28 && cm <=35){
noTone(buzzer1);
tone(buzzer1,NOTE_G3,1000 );
delay(500);
}
else if(cm>35 && cm <=42){
noTone(buzzer1);
tone(buzzer1,NOTE_A3,1000 );
delay(500);
}
else if(cm>42 && cm <=49){
noTone(buzzer1);
tone(buzzer1,NOTE_B3,1000 );
delay(500);
}
else if (cm <=3){
noTone(buzzer1);
Serial.println("less than 3cm");
}
}
long microsecondsToInches(long microseconds)
{return microseconds / 74 / 2;}
long microsecondsToCentimeters(long microseconds)
{return microseconds / 29 / 2;}
