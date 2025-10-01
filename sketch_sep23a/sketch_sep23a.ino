const int inPin1 = 2;   // esp32 
const int inPin2 = 3;   // esp32 
const int outPin1 = 9;  // salida en pwm 
const int outPin2 = 10; // salida salida en owm

void setup() {
  pinMode(inPin1, INPUT);
  pinMode(inPin2, INPUT);
  pinMode(outPin1, OUTPUT);
  pinMode(outPin2, OUTPUT);
}

void loop() {
  unsigned long p1 = pulseIn(inPin1, HIGH, 30000); 
  unsigned long p2 = pulseIn(inPin2, HIGH, 30000); 

  int pwm1 = (p1 == 0) ? 0 : map(constrain(p1, 1000, 2000), 1000, 2000, 0, 255);
  int pwm2 = (p2 == 0) ? 0 : map(constrain(p2, 1000, 2000), 1000, 2000, 0, 255);

  analogWrite(outPin1, pwm1);
  analogWrite(outPin2, pwm2);
}
