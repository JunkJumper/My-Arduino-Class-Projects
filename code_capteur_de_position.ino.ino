// debut
// vaut mieux des define que des int ou const!!

#define motor1Pin1  3 // pin 2 (Input 1) du L293D
#define motor1Pin2  4 // pin 7 (Input 2) du L293D
#define enablePin  9 // pin 1 (Enable 1) du L293D
#define Fin_C_Haut  7 // broche 7 du micro-contrôleur se nomme maintenant : Capt1
#define Fin_C_Bas 8 // broche 3 du micro-contrôleur se nomme maintenant : Capt2

// pour une meilleur lisibilité du programme
#define CapteurHautOn !digitalRead (Fin_C_Haut) //capteur fermé au repos, donc actif LOW
#define CapteurBasOn  !digitalRead (Fin_C_Bas)  //capteur fermé au repos, donc actif LOW

// tu dois declarer tes fonctions avant de les utiliser!!
void monte() {
  digitalWrite(motor1Pin1, LOW); // mettre pin 2 a 293D low
  digitalWrite(motor1Pin2, HIGH); // mettre pin 7 a L293D high
}
void descend() {
  digitalWrite(motor1Pin1, HIGH); // Mettre pin 2 a L293D high
  digitalWrite(motor1Pin2, LOW); // Mettre pin 7 a L293D low
}

void stop() {
  digitalWrite(motor1Pin1, HIGH); // Mettre pin 2 a L293D high
  digitalWrite(motor1Pin2, HIGH); // Mettre pin 7 a L293D low
}

void setup() {
  // set all the other pins you're using as outputs:
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enablePin, OUTPUT);
  
  // initialistaion des capteurs qui sont de preference fermé au repos
  pinMode(Fin_C_Haut, INPUT); // Capt1 est une broche d'entree
  pinMode(Fin_C_Bas, INPUT); // Capt2 est une broche d'entree
        
        stop();
  // Mettre la broche Enable a high comme ca le moteur tourne
  digitalWrite(enablePin, HIGH);
  
  // si au debut on est entre les deux capteur donc on monte
  if (!CapteurHautOn && !CapteurBasOn) monte();
}

void loop() // boucle principal
{
  //contenu du programme
  
  // Si fin de course bas ateint
  if(CapteurBasOn) {
    stop();
    delay(750);
    monte();
  }
  
  // Si fin de course haut ateint
  if(CapteurHautOn) {
    stop();
    delay(750);
    descend();
  }
}
//fin
