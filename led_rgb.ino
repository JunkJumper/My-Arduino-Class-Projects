int bLed = 3;
int gLed = 5;
int rLed = 6;
int vitesse = 200;
int vitesse1 = 0;

void setup() {

pinMode(bLed, OUTPUT);
pinMode(gLed, OUTPUT);
pinMode(rLed, OUTPUT);
}

void loop() {
  
//Red
  ledControl(120, 0, 0);
  delay(vitesse);
  ledControl(0, 0, 0);
  delay(vitesse1);

//Green
  ledControl(0, 120, 0);
  delay(vitesse);
  ledControl(0, 0, 0);
  delay(vitesse1);

//Blue
  ledControl(0, 0, 120);
  delay(vitesse);
  ledControl(0, 0, 0);
  delay(vitesse1);

//Magenta
  ledControl(120, 0, 120);
  delay(vitesse);
  ledControl(0, 0, 0);
  delay(vitesse1);

//Yellow
  ledControl(120, 120, 0);
  delay(vitesse);
  ledControl(0, 0, 0);
  delay(vitesse1);
}



void ledControl (int rIntensity, int gIntensity, int bIntensity) {
  analogWrite(bLed, bIntensity);
  analogWrite(rLed, rIntensity);
  analogWrite(gLed, gIntensity);
}
