const int diagonal_left = 13;
const int middle_inner = 12;
const int middle_outer = 11;
const int diagonal_right = 10;
const int buzzer = 9;
const int button = 8;

int buttonState = 0;
int randomNum = 0;

void setup() {
  pinMode(middle_inner, OUTPUT);
  pinMode(middle_outer, OUTPUT);
  pinMode(diagonal_left, OUTPUT);
  pinMode(diagonal_right, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead(button);
  if (buttonState == HIGH) {
    digitalWrite(middle_inner, LOW);
    digitalWrite(middle_outer, LOW);
    digitalWrite(diagonal_left, LOW);
    digitalWrite(diagonal_right, LOW);
    for (int x = 50; x < 1000; x = x * 1.5) {  //This code programs the dice roll and slowly reduces the speed that the LEDs blink, thus creating a roll effect
      delay(x);
      RandomNumber();
      tone(buzzer, 1000);
      delay(100);
      noTone(buzzer);
      delay(x);
      
      digitalWrite(middle_inner, LOW);
      digitalWrite(middle_outer, LOW);
      digitalWrite(diagonal_left, LOW);
      digitalWrite(diagonal_right, LOW);
    }
    RandomNumber();
    tone(buzzer, 1000);
    delay(1000);
    noTone(buzzer);
  }
}
  
void RandomNumber() {
  randomNum = random(1, 7);
  if (randomNum == 1) {
    digitalWrite(middle_inner, HIGH); 
  } else if (randomNum == 2) {
    digitalWrite(diagonal_left, HIGH); 
  } else if (randomNum == 3) {
    digitalWrite(diagonal_left, HIGH); 
    digitalWrite(middle_inner, HIGH);
  } else if (randomNum == 4) {
    digitalWrite(diagonal_left, HIGH);
    digitalWrite(diagonal_right, HIGH);  
  } else if (randomNum == 5){
    digitalWrite(diagonal_left, HIGH);
    digitalWrite(diagonal_right, HIGH);  
    digitalWrite(middle_inner, HIGH);
  } else if (randomNum == 6) {
    digitalWrite(diagonal_left, HIGH);
    digitalWrite(diagonal_right, HIGH);  
    digitalWrite(middle_outer, HIGH);
  }
}
