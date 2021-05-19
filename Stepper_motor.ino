// MOVEMENT OF STEPPER MOTOR

void stepper_movement(){

unsigned long micro1time = micros();
long delay1=analogRead(pot);
delay1=map(delay1, 0, 1023, 1500, 150);

if (analogRead(Xaxis) < 312)
{
 if (micro1time - micro1prev >=delay1)
{
  digitalWrite(dirPin, HIGH);
  micro1prev = micro1time;
  if (digitalRead(stepPin == LOW))
{
   digitalWrite(stepPin, !digitalRead(stepPin));

 
} 
}}

if (analogRead(Xaxis) > 712)
{
 if (micro1time - micro1prev >=delay1)
{
  digitalWrite(dirPin, LOW);
  micro1prev = micro1time;
  if (digitalRead(stepPin == LOW))
{
   digitalWrite(stepPin, !digitalRead(stepPin));

  
}

}}





  
}

