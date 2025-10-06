// Código de funcionamento do passa ou repassa para Arduino UNO 

// Definindo pinos e portas para os botões, Leds e buzzers para entrada e saída de informações:
 
#define botaoJogador1  13       // acionar o primeiro botão no pino 13.
#define ledJogador1    12      // acionar o primeiro led no pino 12.
#define botaoJoagador2  9     // acionar o segundo botão no pino 9.
#define ledJogador2    10    // acionar o segundo led no pino 10.
#define buzzer1        11   // acionar o primeiro buzzer no pino 11.

// Função de configuração do código para definir se os componentes são entrada ou saída: 

void setup(){
  
  pinMode(botaoJogador1, INPUT);  // definindo o botão 01 como entrada.
  pinMode(botaoJoagador2, INPUT); // definindo o botão 02 como entrada. 
  pinMode(ledJogador1, OUTPUT); // dedinindo o led 01 como saída  (LUZ). 
  pinMode(ledJogador2, OUTPUT);  // definindo o led 02 como saída (LUZ). 
  pinMode(buzzer1, OUTPUT); // definindo o buzzer 01 como saída (sonora).

}


//  Função de repetição ou loop infinito que a placa arduino irá repetidir sem parar: 

void loop() {

  // Declarando a função if (se) dentro da função loop:

  if(digitalRead(botaoJogador1)== HIGH) {

  // Se o primeiro botão for apertado; 

  digitalWrite(ledJogador1, HIGH); // Ligue o primeiro led.
  efeitoSonoro (); // definindo uma função sonora para o buzzer. 
  delay(1000); // tempo do buzzer ligado. 
  piscarLed(); // definindo função piscar led. 

  }
   // Declarando a função else if (caso contrário) dentro da função loop:

  else if (digitalRead(botaoJoagador2) == HIGH) {
  
  // Se o segundo botão for apertado: 

  digitalWrite(ledJogador2, HIGH); // Ligue o segundo led.
  efeitoSonoro(); // definindo uma função sonora para o buzzer. 
  delay(1000)/ // tempo do buzzer ligado. 
  piscarLed(); // definindo função piscar led. 

  }

  // Função de efeito sonoro do buzzer: 

  void efeitoSonoro() {
  
   // subfunção for (para), ela tem a função de fazer o efeito sonoro se repetir várias vezes, conforme i < x, onde x é 4 aqui: 

   for (int i = 0; i< 4; i++) {
   tone (buzzer1, 400);          // O atributo tone serve para definir o buzzer e configurar sua frequência sonora;
   delay(100);       // tempo do buzzer ligado. 
   noTone(buzzer1);  // desligar buzzer.
   delay(200);   // tempo do buzzer desligado. 

   }


  }

  // Declarando subfunção piscarLed para os leds piscarem juntos: 

  void piscarLed () {
 
 for (int i= 0; i< 4; i ++) {

  digitalWrite(ledJogador1, HIGH); // ligar  o primeiro led.
  digitalWrite(ledJogador2, HIGH); // ligar  o segundo led.
  delay(500);  // tempo dos leds ligados. 
  
  digitalWrite(ledJogador1, LOW); // desligar  o primeiro led.
  digitalWrite(ledJogar2, LOW);   // desligar  o segundo led.
  delay(500);  // tempo dos leds desligados.

 }



  }

}
