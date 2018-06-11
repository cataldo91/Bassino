#include <Adafruit_Sensor.h>
#include <DHT.h> 
#include "DHT.h" //libreria per la lettura del sensore temperatura
#include <LiquidCrystal.h>// libreria per lo schermo LCD
#include <CapacitiveSensor.h>// libreria per la lettura del sensore capacitivo
CapacitiveSensor capSensor= CapacitiveSensor(4,5);


// definisco alcuni pin
#define trigPin 13
#define echoPin 12
#define led A3
#define sx A4
#define dx A5
#define DHTPIN A0 //pin di lettura del dht
#define DHTTYPE DHT11// dht11 è il tipo di sensore che uso


extern unsigned long timer0_millis;//var per azzerare il tempo
float s=0;//var globale per evitare che si azzeri constantemente. utilizzata per il calcolo della distanza

LiquidCrystal lcd(6, 7, 8, 9, 10, 11);//pin dello schermo


DHT dht(DHTPIN, DHTTYPE);//setto il sensore di temperatura
void setup() {
  
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(sx, OUTPUT);
  pinMode(dx, OUTPUT);
  pinMode(2, INPUT);
  pinMode (3, INPUT);
 
  
  
  // i numeri all'interno di LCD indicano le righe e le colonne disponibili 
  lcd.begin(16, 2);
  lcd.setCursor(3,0);
  lcd.print("C");
  lcd.setCursor(3,1);
  lcd.print("%");
  lcd.setCursor(12,0);
  lcd.print("km/h");
  lcd.setCursor(12,1);
  lcd.print("km");
  //imposto le misure che verranno mostrate a video
}

void loop() {
  long sensor=capSensor.capacitiveSensor(5);
  float time,time2,v;
  long duration, distance, pressione, pressione2;
  
  //calcolo velocità
if (sensor >5){
  Serial.println(sensor);
   time=millis();
   time=time/1000;
   Serial.print("sec ");
   Serial.println(time);
  
  
    resetMillis();//azzero il tempo
     
    v=((1.8)/(time))*3.6;
    s=s+0.0018;
    resetMillis();
     
    Serial.print("velocità");
    Serial.println(s);
    lcd.setCursor(7, 0);
    lcd.print(v);
    lcd.setCursor(7, 1);
    lcd.print(s);
    delay(20);
  }
 time2=millis();
    if(time2>1500){
    v=0.000;  
    lcd.setCursor(7, 0); 
    lcd.print(v);
    }  
 
 //fine calcolo velocità 
  
//inizio freni  
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 4) { 
 
  
  digitalWrite(led,HIGH); 
 
  
 }   else {    
  digitalWrite(led,LOW); 
 
  }//digitalWrite(led2,HIGH);    
  
  delay(50);
  
//fine freni
  



  //start lettura temperatura
int t= dht.readTemperature();
int h = dht.readHumidity();
lcd.setCursor(0, 0);
lcd.print(t);
lcd.setCursor(0, 1);
lcd.print(h);
  
  //fine lettura temperatura
  
  //inizializzo i pulsanti per le frecce
pressione=digitalRead(2);
pressione2=digitalRead(3);
  
  
if (pressione==HIGH  && pressione2==LOW){// partono le frecce di sinistra
   digitalWrite(sx,HIGH);
   delay(120);
   digitalWrite(sx,LOW);
   delay(70);
  }
 else{
    digitalWrite(sx,LOW) ;
    }
    
    
     
  
  if (pressione2==HIGH && pressione==LOW){// partono le frecce di destra
   digitalWrite(dx,HIGH);
   delay(120);
   digitalWrite(dx,LOW);
   delay(70);
  }
  else{
    digitalWrite(dx,LOW) ;
    }
//fine frecce
  
}
//funzione per azzerare i millisecondi
void resetMillis() {
  cli();
  timer0_millis = 0;
  sei();
}//funzione azzera tempo
