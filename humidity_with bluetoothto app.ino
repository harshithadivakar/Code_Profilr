
#include<SoftwareSerial.h>
#include <DFRobot_DHT11.h>
SoftwareSerial bt(2,3);


#include <LiquidCrystal.h> 
#include "dht.h"
#define dataPin 7

DFRobot_DHT11 DHT;

int temp;
int hum;

void setup() {
 
 Serial.begin(9600); 
 bt.begin(9600); 
 Serial.println("Ready");
  
}

void loop(){
   DHT.read(dataPin);

  hum = DHT.humidity;
  temp = DHT.temperature;
  
bt.print("temperature = ");
 bt.print(temp); //send distance to MIT App
 bt.println(";");
 bt.println("humidity");
 bt.print(hum); //send distance to MIT App 
 bt.println(";");
  
  delay(1000);
}

