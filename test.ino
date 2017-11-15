const int diagonal_left = 13;
const int middle_outer = 12;
const int middle_inner = 11;
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
    for (int x = 1; x < 20; x = x + 1){
      RandomNumber(500, 500);
    }
  }
}

void RandomNumber(int delay_before, int delay_after) {
  randomNum = random(1, 7);
  if (randomNum == 1) {
    delay(delay_before);
    digitalWrite(middle_inner, HIGH); 
    delay(delay_after);
    digitalWrite(middle_inner, LOW); 
  } else if (randomNum == 2) {
    delay(delay_before);
    digitalWrite(diagonal_left, HIGH); 
    delay(delay_after);
    digitalWrite(diagonal_left, LOW); 
  } else if (randomNum == 3) {
    delay(delay_before);
    digitalWrite(diagonal_left, HIGH); 
    digitalWrite(middle_inner, HIGH);
    delay(delay_after);
    digitalWrite(diagonal_left, LOW); 
    digitalWrite(middle_inner, LOW);
  } else if (randomNum == 4) {
    delay(delay_before);
    digitalWrite(diagonal_left, HIGH);
    digitalWrite(diagonal_right, HIGH);  
    delay(delay_after);
    digitalWrite(diagonal_left, LOW);
    digitalWrite(diagonal_right, LOW);  
  } else if (randomNum == 5){
    delay(delay_before);
    digitalWrite(diagonal_left, HIGH);
    digitalWrite(diagonal_right, HIGH);  
    digitalWrite(middle_inner, HIGH);
    delay(delay_after);
    digitalWrite(diagonal_left, LOW);
    digitalWrite(diagonal_right, LOW);  
    digitalWrite(middle_inner, LOW);
  } else if (randomNum == 6) {
    delay(delay_before);
    digitalWrite(diagonal_left, HIGH);
    digitalWrite(diagonal_right, HIGH);  
    digitalWrite(middle_outer, HIGH);
    delay(delay_after);
    digitalWrite(diagonal_left, LOW);
    digitalWrite(diagonal_right, LOW);  
    digitalWrite(middle_outer, LOW);
  }
}
