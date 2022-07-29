int const potPin = A0;
int potVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print (potVal);
} 
  
