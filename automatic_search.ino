void automatic_search() {

unsigned long micro1time = micros();
long delayA;

if ( Encoder_state < 50 && Encoder_state > -50){
  delayA=800;
}
if (Encoder_state <300 && Encoder_state > 50){
  delayA=300;
}
if (Encoder_state > -300 && Encoder_state < -50){
  delayA=300;
}
if (Encoder_state < -300){
  delayA=150;
}
if (Encoder_state > 300){
  delayA=150;
}



if (Encoder_state > 2)
{
 if (micro1time - micro1prev >=delayA)
{
  digitalWrite(dirPin, HIGH);
  micro1prev = micro1time;
  if (digitalRead(stepPin == LOW))
{
   digitalWrite(stepPin, !digitalRead(stepPin));

 
} 
}}

if (Encoder_state < -2)
{
 if (micro1time - micro1prev >=delayA)
{
  digitalWrite(dirPin, LOW);
  micro1prev = micro1time;
  if (digitalRead(stepPin == LOW))
{
   digitalWrite(stepPin, !digitalRead(stepPin));

  
}

}}



  
}

