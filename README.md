# actividadColaborativa
creación de mi primer repositorio

* el item
* el otro item
*   subitem
*     choclo
*     azucar
*     otro tab
*     lalalal

SIN TABS

$$universidad_{UDD} + mayo = casi_termina_semestre$$

![imagen perro meme](./imagen/perromeme.jpeg)

# CONVERTIR EN PAGINA WEB


# CODIGO ARDUINO

```cpp
#include <SoftwareSerial.h>
//definir motores

int MOT1 = 8;
int MOT2 = 6;
int MOT3 = 7;
int delay_t= 200;//ms

int sec = 2000;

const byte txPin = 2;
const byte rxPin = 3;
char btval;
SoftwareSerial mySerial(rxPin, txPin);

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  // Definir entradas y salidas de motores 
  pinMode(MOT1, OUTPUT);
  pinMode(MOT2, OUTPUT);
  pinMode(MOT3, OUTPUT);
  Serial.println("Start");
}

// the loop function runs over and over again forever
void loop() {
  if (mySerial.available()) {
    btval = mySerial.read();
    Serial.println(btval);
    switch (btval) {
      case 'Q':
        prendeL();
        break;

      case 'Z':
        prendeR();
        break;
      case 'W':
        apagaL();
        break;
      case 'X':
        apagaR();
        break;
      case 'H':
        prendeU();
        break;      
      case 'I':
        apagaU();
        break;      
      case 'S':
        prende();
        break;
      case 'U':
        apaga();
        break;
    }
  }
}
void prendeL() {
 for(int i = 0; i<= 5; i++)
  {
    digitalWrite(MOT1, HIGH);
    delay(delay_t);
    digitalWrite(MOT1, LOW);
    delay(delay_t);
  }
;
    // turn the LED on (HIGH is the voltage level)
}
void apagaL() {
  digitalWrite(MOT1, LOW);  
  // turn the LED on (HIGH is the voltage level)
}
void prendeR() {
for(int i = 0; i<= 5; i++)
  {
    digitalWrite(MOT2, HIGH);
    delay(delay_t);
    digitalWrite(MOT2, LOW);
    delay(delay_t);
  }
}

void apagaR() {
  digitalWrite(MOT2, LOW);
}

void prendeU() {
for(int i = 0; i<= 5; i++)
  {
    digitalWrite(MOT3, HIGH);
    delay(delay_t);
    digitalWrite(MOT3, LOW);
    delay(delay_t);
  }
}

void apagaU() {
  digitalWrite(MOT3, LOW);
}


void apaga() {
  digitalWrite(MOT1, LOW);
  digitalWrite(MOT2, LOW); 
  digitalWrite(MOT3, LOW); 
  
}
void prende(){
 for(int i = 0; i<= 5; i++)
  {
    digitalWrite(MOT1, HIGH);
    digitalWrite(MOT2, HIGH);
    digitalWrite(MOT3, HIGH);
    delay(delay_t);
    digitalWrite(MOT1, LOW);
    digitalWrite(MOT2, LOW);
    digitalWrite(MOT3, LOW);
    delay(delay_t);
  }
}

