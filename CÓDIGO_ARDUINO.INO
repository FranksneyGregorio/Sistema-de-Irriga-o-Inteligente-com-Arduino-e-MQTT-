// Definição de pinos
const int botaoPin = 10;  // Pino do botão (usar resistor pull-up)
const int relePin = 9;    // Pino do relé
boolean estado = false;   // Estado da válvula

// Variável para debounce do botão
unsigned long ultimoTempo = 0;
const int debounceDelay = 50; // Tempo para evitar bouncing (ms)

void setup() {
  pinMode(botaoPin, INPUT_PULLUP); // Habilita resistor pull-up interno
  pinMode(relePin, OUTPUT);
  digitalWrite(relePin, LOW); // Garante estado inicial desligado
}

void loop() {
  // Verifica se o botão foi pressionado (LOW por causa do pull-up)
  if (digitalRead(botaoPin) == LOW) {
    // Debounce - evita leituras acidentais
    if (millis() - ultimoTempo > debounceDelay) {
      estado = !estado; // Inverte o estado
      digitalWrite(relePin, estado);
      ultimoTempo = millis(); // Atualiza o tempo do último acionamento
      
      // (Opcional) Debug no Serial Monitor
      // Serial.print("Estado da válvula: ");
      // Serial.println(estado ? "LIGADA" : "DESLIGADA");
    }
  }
}
