int switchState = 0;
int switchState2 = 0;
int switchState3 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  pinMode(7, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);
  switchState2 = digitalRead(4);
  switchState3 = digitalRead(7);

  if (switchState == HIGH && switchState2 == LOW && switchState3 == LOW) {
    tone (10, 440);
    noTone(11);
  }
  else if (switchState2 == HIGH && switchState == LOW && switchState3 == LOW) {
    tone (11, 440);
    noTone(10);
  }
  else if (switchState3 == HIGH && switchState == LOW && switchState2 == LOW) {
    tone (10, 440);
    tone (11, 440);
  }
  else {
    noTone(10);
    noTone(11);
  }
}
