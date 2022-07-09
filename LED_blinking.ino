int greenLED = 12;
int redLED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenLED,OUTPUT);
  pinMode(redLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenLED, HIGH); 
  digitalWrite(redLED, HIGH); 
  delay(1000); 
  digitalWrite(greenLED, LOW); 
  digitalWrite(redLED, LOW);   
  delay(1000); 
}
