const int LDR = A2;

void setup() {  
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(LDR);
  Serial.println(valor);
}
