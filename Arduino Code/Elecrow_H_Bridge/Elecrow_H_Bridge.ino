// Code to run motors using an Arduino Uno and Elecrow Dual Channel H-Bridge Motor Shield
// Author: Benned Hedegaard

#define enableDriver 6
#define m1A 4
#define m1B 5
#define m1PWM 9
#define m2A 7
#define m2B 8
#define m2PWM 10

void setup() {
  // Set up six pins for H-bridge control.
  pinMode(m1A, OUTPUT);
  pinMode(m1B, OUTPUT);
  pinMode(m1PWM, OUTPUT);
  pinMode(m2A, OUTPUT);
  pinMode(m2B, OUTPUT);
  pinMode(m2PWM, OUTPUT);

  // Set default motor direction.
  digitalWrite(m1A, HIGH);
  digitalWrite(m1B, LOW);
  digitalWrite(m2A, LOW);
  digitalWrite(m2B, HIGH);

  // Enable the driver.
  pinMode(enableDriver, OUTPUT);
  digitalWrite(enableDriver, HIGH);
}

/*int frequency = 20; // Hz
int pulse = 1000/frequency; // The delay() function is in milliseconds*/

int r_speed = 255;
int l_speed = 120;

void loop() { 
  analogWrite(m1PWM, l_speed);
  analogWrite(m2PWM, r_speed);
  //delay(pulse);
}
