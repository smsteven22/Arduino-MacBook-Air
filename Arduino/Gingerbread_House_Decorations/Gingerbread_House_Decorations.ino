int const potPin = A0;
int potVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, INPUT);
}

int christmasNotes[] = 
  {1568,1397,1245,1175,1245,1175,1047,932,1047,932,1047,932,1175,784,1047,1175,932,784,1175,740,1047,1175,932,784,1175,699,1047,1175,932,784,1175,622,1047,1175,932,784,1568,932,784,932,1568,932,784,932,1397,1245,1175,932,784,932,1175,932,784,932,1047,932,1047,932,784,932,1047,1047,1175,932,784,784,784,784,587,659,740,784,880,932,1047,1175,1047,932,587,659,740,784,880,932,1047,932,880,932,784,932,880,932,784,932,880,932,784,932,880,932,784,932,880,932,784,932,880,932,784,1865,1568,1397,1245,1175,1047,932,880,784,1865,1568,1397,1245,1175,1047,932,880,784,1865,1568,1397,1245,1175,1047,932,880,784,1865,1568,1397,1245,1175,1047,932,880,784,2349,1865,1760,1568,1397,1245,1175,1047,932,2349,1865,1760,1568,1397,1245,1175,1047,932,1865,1568,1397,1245,1175,1047,932,880,784,880,932,587,1865,1568,1397,1245,1175,1047,932,880,784,880,932,587,1865,1568,1397,1245,1175,1047,932,880,784,1175,932,784,1397,1175,784,1245,1047,784,1047,880,784,1175,932,784,1397,1175,784,1245,1047,784,1047,880,784,1175,932,784,1397,1175,784,1245,1047,784,1047,880,784,1175,932,784,1397,1175,784,1245,1047,784,1047,880,784,1175,932,784,1397,1175,784,1245,1047,784,1047,880,784,1175,932,784,1397,1175,784,1245,1047,784,1047,880,784,1568,1865,1568,0,1047,932,784,1865,1568,0,1047,932,784,1865,1568,0,1047,932,784,1865,1568,0,1047,932,784,1865,1568,0,1175,1047,932,784,1865,1568,0,1175,1047,932,784,1865,1568,0,1175,1047,932,784,1865,1568,0,1175,1047,932,784,1865,1568,0,1245,1175,1047,932,784,1865,1568,0,1245,1175,1047,932,784,1865,1568,0,1245,1175,1047,932,784,1865,1568,0,1245,1175,1047,932,784,1865,1568,0,1397,1245,1175,932,784,1865,1568,0,1397,1245,1175,932,784,1865,1568,0,1397,1245,1175,932,784,1865,1568,0,1397,1245,1175,932,784,1865,1568,0,1047,880,699,932,784,1865,1568,0,1397,1047,880,932,784,1865,1568,0,1760,1397,1047,932,784,1865,1568,0,1397,1047,880,932,784,932,880,932,784,932,880,932,784,932,880,932,784,932,880,932,784,932,880,932,784,932,880,932,784,1865,1760,1865,784};
int christmasLen[] =
  {1500,1500,1500,1500,1500,1500,1500,1500,1500,1500,1500,1500,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,250,125,125,125,125,125,125,125,125,250,250,125,125,125,125,125,125,125,125,250,250,125,125,125,125,250,250,250,250,500,250,250,500,250,250,250,250,250,250,250,250,500,500,250,250,250,250,250,250,1500,500,250,250,500,500,250,250,500,500,250,250,500,500,250,250,500,500,250,250,500,500,250,250,500,125,125,125,125,125,125,125,125,500,125,125,125,125,125,125,125,125,500,125,125,125,125,125,125,125,125,500,125,125,125,125,125,125,125,125,500,125,125,125,125,125,125,125,125,500,125,125,125,125,125,125,125,125,500,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,500,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,125,3000,250,250,125,375,250,250,250,250,125,375,250,250,250,250,125,375,250,250,250,250,125,375,250,250,250,250,125,125,250,250,250,250,250,125,125,250,250,250,250,250,125,125,250,250,250,250,250,125,125,250,250,250,250,250,125,125,125,125,250,250,250,250,125,125,125,125,250,250,250,250,125,125,125,125,250,250,250,250,125,125,125,125,250,250,250,250,125,125,125,125,250,250,250,250,125,125,125,125,250,250,250,250,125,125,125,125,250,250,250,250,125,125,125,125,250,250,250,250,125,125,125,125,250,250,250,250,125,125,125,125,250,250,250,250,125,125,125,125,250,250,250,250,125,125,125,125,250,250,500,250,250,500,500,250,250,500,500,250,250,500,500,250,250,500,500,250,250,500,500,250,250,3000,1250,250,3000,6000};
int c = 0;

void loop() {
  potVal = analogRead(potPin);
   
 if (potVal>= 0 && potVal< 512) {
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);

  delay (250);
  
  digitalWrite (3, HIGH);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);

  delay (250);
  
  digitalWrite (3, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);

  delay (250);

  digitalWrite (3, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);

  delay (250);

  digitalWrite (3, LOW);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);

  delay (250);
  
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);

  delay (250);

  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);

  delay (250);

  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, HIGH);

  delay (250);

  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);

  delay (250);

  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, HIGH);

  delay (250);

  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);

  delay (250);

  
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);

  delay (250);

  
  digitalWrite (3, LOW);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, LOW);

  delay (250);

  
  digitalWrite (3, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);

  delay (250);

  
  digitalWrite (3, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);

  delay (250);

  
  digitalWrite (3, HIGH);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);

  delay (250);

  
  digitalWrite (3, LOW);
  digitalWrite (4, LOW);
  digitalWrite (5, LOW);
  digitalWrite (6, LOW);
  digitalWrite (7, LOW);

  delay (250);
  }

else if (potVal >= 512 && potVal == 1023) {
  digitalWrite (3, HIGH);
  digitalWrite (4, HIGH);
  digitalWrite (5, HIGH);
  digitalWrite (6, HIGH);
  digitalWrite (7, HIGH);
  
  tone (10, christmasNotes[c], christmasLen[c]);
  delay (christmasLen[c]);
  delay(5);
  c = c+1;
  if (c == 445) {
    c=0;
  }
}
} 
