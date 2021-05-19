// INTERRUPTY Z ENCODERA
void encodera(){
  if (digitalRead(A) == HIGH) {
    if (digitalRead(B) == LOW) {
      Encoder_state++;
    } else {
      Encoder_state--;
    }
  }    else {
      if (digitalRead(B) == LOW){
        Encoder_state--;
      }
      else {
        Encoder_state++;
      }
    }
   
  }
void encoderb(){
  if (digitalRead(B) == HIGH) {
    if (digitalRead(A) == LOW) {
      Encoder_state--;
    } else {
      Encoder_state++;
    }
  }    else {
      if (digitalRead(A) == LOW){
        Encoder_state++;
      }
      else {
        Encoder_state--;
      }
    }
 
  }
