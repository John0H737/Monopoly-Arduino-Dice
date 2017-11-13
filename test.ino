const int middle_inner = 13;
const int middle_outer = 12;
const int diagonal_left = 11;
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
    digitalWrite(randomNum, HIGH);
    delay(5000);
    digitalWrite(randomNum, LOW);
}
