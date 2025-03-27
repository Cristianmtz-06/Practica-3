// DIVISIÓN
int A = 0;
int B = 0;

void setup() {
  pinMode(8, INPUT);    // Botón A
  pinMode(9, INPUT);    // Botón B
  pinMode(10, OUTPUT);  // LED INDEFINIDO
  pinMode(11, OUTPUT);  // LED INFINITO
  pinMode(12, OUTPUT);  // LED DIVISIÓN1
  pinMode(13, OUTPUT);  // LED DIVISIÓN2
}

void loop() {
  A = digitalRead(8); // Leer botón A
  B = digitalRead(9); // Leer botón B

  // Caso de INDEFINIDO
  if (!A && !B) {
    digitalWrite(10, HIGH); delay(10);} 

  // Caso de INFINITO
  if (A && !B) {
    digitalWrite(11, HIGH); delay(10);} 

   // Caso de DIVISION1
  if (A && B) {
    digitalWrite(12, HIGH); delay(10);} 

  // Caso de DIVISIÓN2
  if (!A && B) {
   delay(10);} 

  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}