const int middle_inner = 1;
const int middle_outer = 2;
const int diagonal_left = 3;
const int diagonal_right = 4;
const int button = 5;

int buttonState = 0;
int randomNum = 0;

void setup() {
  pinMode(middle_inner, OUTPUT)
  pinMode(middle_outer, OUTPUT)
  pinMode(diagonal_left, OUTPUT)
  pinMode(diagonal_right, OUTPUT)
  pinMode(button, INPUT)
}

void loop() {
  buttonState = digitalRead(button)
  if (buttonState == HIGH) {
    randomNum = random(1, 7);
    if (randomNum == 1) {}
    else if (randomNum == 2) {}
    else if (randomNum == 3) {}
    else if (randomNum == 4) {}
    else if (randomNum == 5) {}
    else if (randomNum == 6) {}
  } else {
    // do other stuff
  }

}
