#include <Wire.h>
#include <AS5600.h>
AMS_5600 enc;
int p = 25; // pulse pin
int d = 26; // dir
int e = 27; // enable 
int steps = 1600; 
void setup() {
Serial.begin(115200);
Wire.begin();
  
pinMode(p, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
  
  digitalWrite(e, LOW);

  Serial.println("starting up...");
  delay(500);
  
  if (enc.detectMagnet() == 1) {
    Serial.println("magnet found!!!");
  } else {
    Serial.println("magnet not founa");
  }
}

void loop() {
  // GOING FORWARD
  digitalWrite(d, HIGH);
  Serial.println("spinning right");
  
  for (int x = 0; x < steps; x++) {
    digitalWrite(p, HIGH);
    delayMicroseconds(500); // make this smaller to go faster but it might stall
    digitalWrite(p, LOW);
    delayMicroseconds(500);
    
    
  if (x % 200 == 0) {
     int raw = enc.getRawAngle();
     float deg = raw * 0.08789;
     Serial.print("Angle: ");
  
    Serial.println(deg);
    }
  }
  
  delay(1500)

  // GOING BACKWARDS
  digitalWrite(d, LOW);
  Serial.println("spinning left");
  
  for (int x = 0; x < steps; x++) {
    digitalWrite(p, HIGH);
    delayMicroseconds(500);
    digitalWrite(p, LOW);
    delayMicroseconds(500);
    
  if (x % 200 == 0) {
      int raw = enc.getRawAngle();
      float deg = raw * 0.08789;
      Serial.print("Angle: ");
      Serial.println(deg);
    }
  }

delay(1500);
}
