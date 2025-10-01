int ch1 = 25; 
int ch2 = 26; 
int pulseWidth1 = 1000;
int pulseWidth2 = 1500;
int step1 = 10;
int step2 = 15;

void setup() {
  pinMode(ch1, OUTPUT);
  pinMode(ch2, OUTPUT);
}

void loop() {
  digitalWrite(ch1, HIGH);
  delayMicroseconds(pulseWidth1);
  digitalWrite(ch1, LOW);
  
  digitalWrite(ch2, HIGH);
  delayMicroseconds(pulseWidth2);
  digitalWrite(ch2, LOW);

  delay(20 - 1); 

  pulseWidth1 += step1;
  if (pulseWidth1 > 2000 || pulseWidth1 < 1000) step1 = -step1;

  pulseWidth2 += step2;
  if (pulseWidth2 > 2000 || pulseWidth2 < 1000) step2 = -step2;
}