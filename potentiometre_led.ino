int potPin= A0;
int LEDPin= 9;
int readValue;
int writeValue;
 
void setup() {
  pinMode(potPin, INPUT);
  pinMode(LEDPin, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  
 readValue = analogRead(potPin);
 writeValue = (255./1023.) * readValue;
 analogWrite(LEDPin, writeValue);
 Serial.print("Valeur du potentiometre :");
 Serial.println(writeValue);
 delay (500);
 
}
