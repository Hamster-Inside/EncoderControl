#define A 2
#define B 3
#define pot A0
#define Xaxis A1
#define Start 8
#define Stop 9
#define Position 10
#define stepPin 11
#define dirPin 13

volatile long Encoder_state = 0;
boolean auto_search = false;
unsigned long micro1prev = 0;
long gopos=0;
long a = 0;
boolean gogo = false;
void setup() {
pinMode(A, INPUT);
pinMode(B, INPUT);
attachInterrupt(0, encodera, CHANGE);
attachInterrupt(1, encoderb, CHANGE);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(Start, INPUT);
  pinMode(Stop, INPUT);
  pinMode(Position, INPUT);

  digitalWrite(dirPin, LOW);
  digitalWrite(stepPin, LOW);

  
Serial.begin(9600);
}

void loop() {
  


if (digitalRead(Position) == HIGH && gogo==false){
 Encoder_state = 0;

}

if (digitalRead(Start) == HIGH){
auto_search = true;

}
if (digitalRead(Stop) == HIGH){
auto_search = false;

}
if (auto_search == true){
 automatic_search();  
//spin_1600pos();

}
if (auto_search == false) {
  stepper_movement();
}
}
