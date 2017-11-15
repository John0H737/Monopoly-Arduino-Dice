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
    randomNum = random(1, 7);
    if (randomNum == 1) {
      delay(1000);
      digitalWrite(middle_inner, HIGH); 
      delay(1000);
      digitalWrite(middle_inner, LOW); 
    } else if (randomNum == 2) {
      delay(1000);
      digitalWrite(diagonal_left, HIGH); 
      delay(1000);
      digitalWrite(diagonal_left, LOW); 
    } else if (randomNum == 3) {
      delay(1000);
      digitalWrite(diagonal_left, HIGH); 
      digitalWrite(middle_inner, HIGH);
      delay(1000);
      digitalWrite(diagonal_left, LOW); 
      digitalWrite(middle_inner, LOW);
    } else if (randomNum == 4) {
      delay(1000);
      digitalWrite(diagonal_left, HIGH);
      digitalWrite(diagonal_right, HIGH);  
      delay(1000);
      digitalWrite(diagonal_left, LOW);
      digitalWrite(diagonal_right, LOW);  
    } else if (randomNum == 5){
      delay(1000);
      digitalWrite(diagonal_left, HIGH);
      digitalWrite(diagonal_right, HIGH);  
      digitalWrite(middle_inner, HIGH);
      delay(1000);
      digitalWrite(diagonal_left, LOW);
      digitalWrite(diagonal_right, LOW);  
      digitalWrite(middle_inner, LOW);
    } else if (randomNum == 6) {
      delay(1000);
      digitalWrite(diagonal_left, HIGH);
      digitalWrite(diagonal_right, HIGH);  
      digitalWrite(middle_outer, HIGH);
      delay(1000);
      digitalWrite(diagonal_left, LOW);
      digitalWrite(diagonal_right, LOW);  
      digitalWrite(middle_outer, LOW);
    }
  }
}
