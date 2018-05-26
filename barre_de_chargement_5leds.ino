int wpin = 6;
int rpin = 5;
int bpin = 4;
int gpin = 3;
int ypin = 2;
int vitesse = 100;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
pinMode (wpin, LOW);
pinMode (rpin, LOW);
pinMode (bpin, LOW);
pinMode (gpin, LOW);
pinMode (ypin, LOW);
delay (vitesse);
pinMode (wpin, HIGH);
delay (vitesse);
pinMode (bpin, HIGH);
delay (vitesse);
pinMode (gpin, HIGH);
delay (vitesse);
pinMode (ypin, HIGH);
delay (vitesse);
}

