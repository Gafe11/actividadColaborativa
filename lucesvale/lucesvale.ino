// Declaraciones de las funciones antes de su uso en el loop()

void pattern2();

void pattern3();

void pattern4();

void pattern5();

void pattern6();

void pattern7();

void pattern8();

void pattern9();

void pattern10();

void pattern11();

void pattern12();

void pattern13();

void pattern14();

 

// Definición de los pines de los LEDs (9 LEDs en total), ahora partiendo desde el pin 2

const int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10}; // Pines donde están conectados los LEDs

const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

const int delayTime = 750; // Tiempo en milisegundos (0.75 segundos)

 

void setup() {

  // Configuración inicial del Arduino

  Serial.begin(9600);

 

  // Configura todos los pines de los LEDs como salida

  for (int i = 0; i < numLeds; i++) {

    pinMode(ledPins[i], OUTPUT);

    digitalWrite(ledPins[i], LOW); // Asegúrate de que todos los LEDs estén apagados al inicio

  }

 

  // Espera 2 segundos antes de comenzar los patrones con todos los LEDs apagados

  delay(2000); // 2 segundos de espera

}

 

void loop() {

  // Ejecuta las funciones en el patrón

  for (int i = 0; i < 2; i++) { pattern2(); }

  for (int i = 0; i < 2; i++) { pattern3(); }

  for (int i = 0; i < 2; i++) { pattern4(); }

  for (int i = 0; i < 2; i++) { pattern5(); }

  for (int i = 0; i < 2; i++) { pattern6(); }

  for (int i = 0; i < 2; i++) { pattern7(); }

  for (int i = 0; i < 20; i++) { pattern8(); }

  for (int i = 0; i < 2; i++) { pattern9(); }

  for (int i = 0; i < 3; i++) { pattern10(); }

  for (int i = 0; i < 3; i++) { pattern11(); }

  for (int i = 0; i < 2; i++) { pattern12(); }

  for (int i = 0; i < 2; i++) { pattern13(); }

  for (int i = 0; i < 20; i++) { pattern14(); }

}

 

// Funciones de patrones

 

// Función común para todos los patrones

void turnOnAndOffLeds() {

  for (int i = 0; i < numLeds; i++) {

    digitalWrite(ledPins[i], HIGH); // Enciende el LED

    Serial.print("LED encendido en el pin: ");

    Serial.println(ledPins[i]);

    delay(delayTime);               // Mantén el LED encendido por 0.75 segundos

    digitalWrite(ledPins[i], LOW);  // Apaga el LED

  }

}

 

void pattern2() { turnOnAndOffLeds(); }

void pattern3() { turnOnAndOffLeds(); }

void pattern4() { turnOnAndOffLeds(); }

void pattern5() { turnOnAndOffLeds(); }

void pattern6() { turnOnAndOffLeds(); }

void pattern7() { turnOnAndOffLeds(); }

void pattern8() { turnOnAndOffLeds(); }

void pattern9() { turnOnAndOffLeds(); }

void pattern10() { turnOnAndOffLeds(); }

void pattern11() { turnOnAndOffLeds(); }

void pattern12() { turnOnAndOffLeds(); }

void pattern13() { turnOnAndOffLeds(); }

void pattern14() { turnOnAndOffLeds(); }
