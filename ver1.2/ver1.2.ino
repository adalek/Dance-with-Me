//include sound file for theme songs:
# include "Star_War_Theme.h"
# include "Harry_Potter_Theme.h"
# include "Mario_Theme.h"

//include distance sensing system:
# include "distance_sensing.h"

//declare pin number for the buzzer:
const int buzzer_Pin = 8;

//declare pin number for the distance sensing:
const int trigPin = 13;
const int echoPin = 12;

//declare pin for the general control:
int status_of_Harry_Potter = 0;
int laststatus_of_Harry_Potter = 0;
int status_of_Star_War = 0;
int laststatus_of_Star_War = 0;
int status_of_Mario = 0;
int laststatus_of_Mario = 0;
int status_of_distance = 0;
int laststatus_of_distance = 0;

//declare status of each pin:
const int Pin_for_Harry_Potter = 2;
const int Pin_for_Star_War = 3;
const int Pin_for_Mario = 4;
const int Pin_for_distance = 5;

//declare situation of switch situation:
int situation;

//setup of the main program:
void setup()
{
  Serial.begin(9600);
  //Setup pin modes
  pinMode(buzzer_Pin, OUTPUT);
  pinMode(Pin_for_Mario,INPUT);
  pinMode(Pin_for_Harry_Potter,INPUT);
  pinMode(Pin_for_Star_War,INPUT);
  //add one
  pinMode(Pin_for_distance,INPUT);
}

//execute the whole program:
void loop(){
  // read the pushbutton input pin:
  status_of_Harry_Potter = digitalRead(Pin_for_Harry_Potter);
  Serial.println(status_of_Harry_Potter);

  // compare the status_of_Harry_Potter to its previous state
  if (status_of_Harry_Potter != laststatus_of_Harry_Potter) {
    // if the state has changed, increment the counter
    if (status_of_Harry_Potter == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      //Play_Harry_Potter_Theme(buzzer_Pin);
      Serial.println("on");
      Play_Harry_Potter_Theme(buzzer_Pin);
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  laststatus_of_Harry_Potter = status_of_Harry_Potter;

   // read the pushbutton input pin:
  status_of_Star_War = digitalRead(Pin_for_Star_War);
  Serial.println(status_of_Star_War);

  if (status_of_Star_War != laststatus_of_Star_War) {
    // if the state has changed, increment the counter
    if (status_of_Star_War == HIGH) {
      Serial.println("on");
      Play_Star_War_Theme(buzzer_Pin);
    } else {
      Serial.println("off");
    }
    delay(50);
  }
  laststatus_of_Star_War = status_of_Star_War;
  
  status_of_Mario = digitalRead(Pin_for_Mario);
  Serial.println(status_of_Mario);

  if (status_of_Mario != laststatus_of_Mario) {
    if (status_of_Mario == HIGH) {
      Serial.println("on");
      Play_Mario_Theme(buzzer_Pin);
    } else {
      Serial.println("off");
    }
    delay(50);
  }
  laststatus_of_Mario = status_of_Mario;
}
//void loop(){
//  //Play_Star_War_Theme(buzzer_Pin);
//  //Play_Harry_Potter_Theme(buzzer_Pin);
//  //distance_sensing(int trigPin,int echoPin,int buzzer1);
//  //Play_Mario_Theme(buzzer_Pin);
//  situation = 0;
//  status_of_Harry_Potter = return_botton(Pin_for_Harry_Potter);
//  status_of_Star_War = return_botton(Pin_for_Star_War);
//  status_of_Mario = return_botton(Pin_for_Mario);
//  status_of_distance = return_botton(Pin_for_distance);
//  if(status_of_Harry_Potter==on && status_of_Star_War==off && status_of_Mario==off && status_of_distance==off){
//    situation = 1;
//  }else if(status_of_Harry_Potter==off && status_of_Star_War==on && status_of_Mario==off && status_of_distance==off){
//    situation = 2;
//  }else if (status_of_Harry_Potter==off && status_of_Star_War==off && status_of_Mario==on && status_of_distance==off){
//    situation = 3;
//  }else if (status_of_Harry_Potter==off && status_of_Star_War==off && status_of_Mario==off && status_of_distance==on){
//    situation = 4;
//  }
//  
//  switch (situation){
//    case 1:
//    Play_Harry_Potter_Theme(buzzer_Pin);
//    break;
//    
//    case 2:
//    Play_Star_War_Theme(buzzer_Pin);
//    break;
//    
//    case 3:
//    Play_Mario_Theme(buzzer_Pin);
//    break;
//    
//    case 4:
//    distance_sensing(trigPin,echoPin,buzzer_Pin);
//    break;
//    
//    default:
//    noTone(buzzer_Pin);
//    break;
//    
//  }
//  
//  /*if(status_of_Harry_Potter==on){
//    status_of_Star_War=off;
//    status_of_Mario = off;
//    Play_Harry_Potter_Theme(buzzer_Pin);
//    noTone(buzzer_Pin);
//    status_of_Harry_Potter=status_of_Harry_Potter*-1;
//  }else if(status_of_Star_War==on){
//    status_of_Mario = off;
//    status_of_Harry_Potter=off;
//    Play_Star_War_Theme(buzzer_Pin);
//    noTone(buzzer_Pin);
//    status_of_Star_War=status_of_Star_War*-1;
//  }else if(status_of_Mario==on){
//    status_of_Harry_Potter=off;
//    status_of_Star_War=off;
//    Play_Mario_Theme(buzzer_Pin);
//    noTone(buzzer_Pin);
//    status_of_Mario=status_of_Mario*-1;
//  }
//  */
//}
