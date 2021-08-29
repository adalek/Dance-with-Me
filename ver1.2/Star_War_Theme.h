# include "notes_for_Star_War_theme.h"
int counter = 0;
int buzzerPin;
void firstSection();
void secondSection();
void beep(int buzzerPin,int note, int duration);
void Play_Star_War_Theme(int buzzerPin)
{
 
  //Play first section
  beep(buzzerPin,a, 500);
  beep(buzzerPin,a, 500);    
  beep(buzzerPin,a, 500);
  beep(buzzerPin,f, 350);
  beep(buzzerPin,cH, 150);  
  beep(buzzerPin,a, 500);
  beep(buzzerPin,f, 350);
  beep(buzzerPin,cH, 150);
  beep(buzzerPin,a, 650);
 
  delay(500);
 
  beep(buzzerPin,eH, 500);
  beep(buzzerPin,eH, 500);
  beep(buzzerPin,eH, 500);  
  beep(buzzerPin,fH, 350);
  beep(buzzerPin,cH, 150);
  beep(buzzerPin,gS, 500);
  beep(buzzerPin,f, 350);
  beep(buzzerPin,cH, 150);
  beep(buzzerPin,a, 650);
 
  delay(500);
 
  //Play second section
  beep(buzzerPin,aH, 500);
  beep(buzzerPin,a, 300);
  beep(buzzerPin,a, 150);
  beep(buzzerPin,aH, 500);
  beep(buzzerPin,gSH, 325);
  beep(buzzerPin,gH, 175);
  beep(buzzerPin,fSH, 125);
  beep(buzzerPin,fH, 125);    
  beep(buzzerPin,fSH, 250);
 
  delay(325);
 
  beep(buzzerPin,aS, 250);
  beep(buzzerPin,dSH, 500);
  beep(buzzerPin,dH, 325);  
  beep(buzzerPin,cSH, 175);  
  beep(buzzerPin,cH, 125);  
  beep(buzzerPin,b, 125);  
  beep(buzzerPin,cH, 250);  
 
  delay(350);
 
  //Variant 1
  beep(buzzerPin,f, 250);  
  beep(buzzerPin,gS, 500);  
  beep(buzzerPin,f, 350);  
  beep(buzzerPin,a, 125);
  beep(buzzerPin,cH, 500);
  beep(buzzerPin,a, 375);  
  beep(buzzerPin,cH, 125);
  beep(buzzerPin,eH, 650);
 
  delay(500);
 
  //Repeat second section
  beep(buzzerPin,aH, 500);
  beep(buzzerPin,a, 300);
  beep(buzzerPin,a, 150);
  beep(buzzerPin,aH, 500);
  beep(buzzerPin,gSH, 325);
  beep(buzzerPin,gH, 175);
  beep(buzzerPin,fSH, 125);
  beep(buzzerPin,fH, 125);    
  beep(buzzerPin,fSH, 250);
 
  delay(325);
 
  beep(buzzerPin,aS, 250);
  beep(buzzerPin,dSH, 500);
  beep(buzzerPin,dH, 325);  
  beep(buzzerPin,cSH, 175);  
  beep(buzzerPin,cH, 125);  
  beep(buzzerPin,b, 125);  
  beep(buzzerPin,cH, 250);  
 
  delay(350);
 
  //Variant 2
  beep(buzzerPin,f, 250);  
  beep(buzzerPin,gS, 500);  
  beep(buzzerPin,f, 375);  
  beep(buzzerPin,cH, 125);
  beep(buzzerPin,a, 500);  
  beep(buzzerPin,f, 375);  
  beep(buzzerPin,cH, 125);
  beep(buzzerPin,a, 650);  
 
  delay(650);
}
 
void beep(int buzzerPin,int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
 
  //Play different LED depending on value of 'counter'
  if(counter % 2 == 0)
  {
    delay(duration);
  }else
  {
    delay(duration);
  }
 
  //Stop tone on buzzerPin
  noTone(buzzerPin);
 
  delay(50);
 
  //Increment counter
  counter++;
}
 
void firstSection()
{
  beep(buzzerPin,a, 500);
  beep(buzzerPin,a, 500);    
  beep(buzzerPin,a, 500);
  beep(buzzerPin,f, 350);
  beep(buzzerPin,cH, 150);  
  beep(buzzerPin,a, 500);
  beep(buzzerPin,f, 350);
  beep(buzzerPin,cH, 150);
  beep(buzzerPin,a, 650);
 
  delay(500);
 
  beep(buzzerPin,eH, 500);
  beep(buzzerPin,eH, 500);
  beep(buzzerPin,eH, 500);  
  beep(buzzerPin,fH, 350);
  beep(buzzerPin,cH, 150);
  beep(buzzerPin,gS, 500);
  beep(buzzerPin,f, 350);
  beep(buzzerPin,cH, 150);
  beep(buzzerPin,a, 650);
 
  delay(500);
}
 
void secondSection()
{
  beep(buzzerPin,aH, 500);
  beep(buzzerPin,a, 300);
  beep(buzzerPin,a, 150);
  beep(buzzerPin,aH, 500);
  beep(buzzerPin,gSH, 325);
  beep(buzzerPin,gH, 175);
  beep(buzzerPin,fSH, 125);
  beep(buzzerPin,fH, 125);    
  beep(buzzerPin,fSH, 250);
 
  delay(325);
 
  beep(buzzerPin,aS, 250);
  beep(buzzerPin,dSH, 500);
  beep(buzzerPin,dH, 325);  
  beep(buzzerPin,cSH, 175);  
  beep(buzzerPin,cH, 125);  
  beep(buzzerPin,b, 125);  
  beep(buzzerPin,cH, 250);  
 
  delay(350);
}
