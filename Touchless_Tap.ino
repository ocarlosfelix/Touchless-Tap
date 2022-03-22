#include <HCSR04.h>

#define valvula 2
#define watchdog_valvula 3
#define trig 12
#define echo 13

void setup(){
  pinMode(3, INPUT);
  pinMode(2, OUTPUT);
  UltraSonicDistanceSensor distanceSensor(13, 12);
  Serial.begin(9600);

}

void loop() {
  if (digitalRead(3) == 0) {
    if (distanceSensor.measureDistanceCm(13, 12) < 20) {
      digitalWrite(2, HIGH);
      delay(2000); // Wait for 2000 millisecond(s)
    }
  }
  if (digitalRead(3) == 1) {
    if (distanceSensor.measureDistanceCm(13, 12) < 20) {
      digitalWrite(2, LOW);
      delay(2000); // Wait for 2000 millisecond(s)
    }
  }
  
  Serial.println(distanceSensor.measureDistanceCm(13, 12));
  Serial.println(digitalRead(3));

}
