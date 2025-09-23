const int RPWM = 25;
const int LPWM = 26;

int velocidad = 200;

void setup() {
  pinMode(RPWM, OUTPUT);
  pinMode(LPWM, OUTPUT);
}

void loop() {
  analogWrite(RPWM, velocidad); 
  analogWrite(LPWM, 0);         
  delay(2000);

  analogWrite(RPWM, 0);
  analogWrite(LPWM, velocidad);
  delay(2000);

  analogWrite(RPWM, 0);
  analogWrite(LPWM, 0);
  delay(2000);//testing github commit 
}
