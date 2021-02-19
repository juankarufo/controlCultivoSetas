#include "DHT.h"


#define DHTPIN 11
#define DHTTYPE DHT11


DHT dht(DHTPIN, DHTTYPE);

//reserva de memoria
float humedad;
float temperatura;

void setup() {
    Serial.begin(9600); 
    
    dht.begin();

   
}


void loop() {
    delay(2000);
    humedad = dht.readHumidity();
    temperatura = dht.readTemperature();
    
    Serial.print("Humidity: "); 
    Serial.print(humedad);
    Serial.println();
    Serial.print("Temperature: "); 
    Serial.print(temperatura);
    Serial.print(" *C ");
    Serial.println();
}
