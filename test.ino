const int diagonal_left = 13;
const int middle_inner = 12;
const int middle_outer = 11;
const int diagonal_right = 10;
const int button = 8;

int buttonState = 0;
int randomNum = 0;

void setup() {
  pinMode(middle_inner, OUTPUT);
  pinMode(middle_outer, OUTPUT);
  pinMode(diagonal_left, OUTPUT);
  pinMode(diagonal_right, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead(button);
  if (buttonState == HIGH) {
    digitalWrite(middle_inner, LOW);
    digitalWrite(middle_outer, LOW);
    digitalWrite(diagonal_left, LOW);
    digitalWrite(diagonal_right, LOW);
    for (int x = 50; x < 1000; x = x * 1.5){
      RandomNumber(x, x);
      //This code programs the dice roll and slowly reduces the speed that the LEDs blink, thus creating a slowing roll effect
      //Problem, after the blinkling slows, the final result comes up, but times out in less then a second
        digitalWrite(middle_inner, LOW);
        digitalWrite(middle_outer, LOW);
        digitalWrite(diagonal_left, LOW);
        digitalWrite(diagonal_right, LOW);
    }
     RandomNumber(1000, 0);
  }
}
  
void RandomNumber(int delay_before, int delay_after) {
  randomNum = random(1, 7);
  if (randomNum == 1) {
    delay(delay_before);
    digitalWrite(middle_inner, HIGH); 
    delay(delay_after);
  } else if (randomNum == 2) {
    delay(delay_before);
    digitalWrite(diagonal_left, HIGH); 
    delay(delay_after);
  } else if (randomNum == 3) {
    delay(delay_before);
    digitalWrite(diagonal_left, HIGH); 
    digitalWrite(middle_inner, HIGH);
    delay(delay_after);
  } else if (randomNum == 4) {
    delay(delay_before);
    digitalWrite(diagonal_left, HIGH);
    digitalWrite(diagonal_right, HIGH);  
    delay(delay_after);
  } else if (randomNum == 5){
    delay(delay_before);
    digitalWrite(diagonal_left, HIGH);
    digitalWrite(diagonal_right, HIGH);  
    digitalWrite(middle_inner, HIGH);
    delay(delay_after);
  } else if (randomNum == 6) {
    delay(delay_before);
    digitalWrite(diagonal_left, HIGH);
    digitalWrite(diagonal_right, HIGH);  
    digitalWrite(middle_outer, HIGH);
    delay(delay_after);
  }
}
