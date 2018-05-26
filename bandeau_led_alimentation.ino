int bLed = 3;
int gLed = 5;
int rLed = 6;
int vitesse = 200;

void setup() {

pinMode(bLed, OUTPUT);
pinMode(gLed, OUTPUT);
pinMode(rLed, OUTPUT);
}

void loop() {
  
//Red
  ledControl(20, 20, 20);
  delay(vitesse);
}

void ledControl (int rIntensity, int gIntensity, int bIntensity) {
  analogWrite(bLed, bIntensity);
  analogWrite(rLed, rIntensity);
  analogWrite(gLed, gIntensity);
}
