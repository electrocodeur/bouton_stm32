int pushButton = PB13;//pin du bouton
int led = PB12;
void setup() {
  Serial.begin(9600);//initialisation du port serie
  pinMode(pushButton, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  Serial.println(digitalRead(pushButton));//affichage de la valeur du bouton
  if (digitalRead(pushButton) == HIGH) {
    digitalWrite(led, HIGH);
  }
  if (digitalRead(pushButton) == LOW) {
    digitalWrite(led, LOW);
  }
}
