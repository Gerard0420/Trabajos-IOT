const int umbral = 500; 
const int ledPin = 13; 

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  int valorLuz = analogRead(pinLDR);
  Serial.println(valorLuz);
  
  // Si el valor de luz es menor que el umbral, encendemos el LED
  if (valorLuz < umbral) {
    digitalWrite(ledPin, HIGH); // Encender el LED
  } else {
    digitalWrite(ledPin, LOW);  // Apagar el LED
  }
  
  delay(500);
}

