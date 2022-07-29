void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

int fairyNotes[] = {165,330,165,370,165,392,165,311,165,784,659,784,740,622,659,587,587,587,554,554,554,523,523,523,494,659,523,659,494,165,147,131,124,117,392,330,392,370,262,247,784,784,784,740,740,740,659,659,659,622,740,659,740,622,124,110,98,93,82,784,659,784,740,622,659,587,587,587,554,554,554,523,523,523,494,659,523,659,494,392,370,330,294,277,659,554,659,622,330,311,262,247,587,494,587,554,294,277,247,220,523,440,523,494,262,247,220,196,494,622,740,988,659,124,277,554,311,622,330,659,370,740,392,784,330,659,311,622,185,165,311,330,165,147,277,294,247};
int fairyLen[] = {429,429,429,429,429,429,429,429,429,214,214,429,429,429,429,214,214,429,214,214,429,214,214,429,214,214,214,214,429,107,107,107,107,429,214,214,429,429,429,429,214,214,429,214,214,429,214,214,429,214,214,214,214,429,107,107,107,107,429,214,214,429,429,429,429,214,214,429,214,214,429,214,214,429,214,214,214,214,429,107,107,107,107,429,214,214,429,107,107,107,107,429,214,214,429,107,107,107,107,429,214,214,429,107,107,107,107,429,107,107,107,107,429,429,214,214,214,214,214,214,214,214,214,214,214,214,214,214,429,429,429,429,429,429,429,429,429};
int f = 0;

void loop() {
  // put your main code here, to run repeatedly:
  if (f == 0) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(12, HIGH);
    
    tone (11, fairyNotes[f], fairyLen[f]);
    delay (fairyLen[f]);
    delay(5);
  }
  else if (f % 2 == 0) {
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(10, HIGH);
    
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
    digitalWrite(12, LOW);
    
    tone (11, fairyNotes[f], fairyLen[f]);
    delay (fairyLen[f]);
    delay(5);
  }
  else {
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
    digitalWrite(8, LOW);
    digitalWrite(10, LOW);
    
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(12, HIGH);
    
    tone (11, fairyNotes[f], fairyLen[f]);
    delay (fairyLen[f]);
    delay(5);
  }
  f = f + 1;
  if (f == 114) {
    f = 0;
  }
}
