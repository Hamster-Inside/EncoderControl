void spin_1600pos(){

unsigned long micro1time = micros();

long delayA = 100;





if (Encoder_state < gopos)
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
if (Encoder_state > gopos)
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


if (digitalRead(Position) == LOW){
if (gopos < Encoder_state < gopos){
  gogo=false;
}

}
} 


