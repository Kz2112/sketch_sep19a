void parpeadeo(int time) {
  digitalWrite(13,HIGH);    //turn the LED on HIGH(HIGH is the voltage level)
  delay(time) ;            // wait for a second   
  digitalWrite(13, LOW) ; // turn the LED off by making the voltage LOW
  delay(time); 
}

// the setup fuction runs once when you press reset or power the board
void setup ()  {
 // initializate digital pin 13 as an output.
 pinMode (13, OUTPUT) ;
}

// the loop fuction runs over and over again forever 
void loop () {
  digitalWrite (13, HIGH) ; // turn the LED on (HIGH is the the voltage level)
  delay(1000) ;            // Wait for a second
  digitalWrite(13, LOW) ; // turn the LED off by making the voltage LOW 
  delay(1000) ;          // wait for a second 
}
