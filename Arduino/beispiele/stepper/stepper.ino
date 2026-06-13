#include <AccelStepper.h>

// PUL = Pin 22, DIR = Pin 21
AccelStepper stepper(AccelStepper::DRIVER, 22, 21);

void setup() {
  stepper.setMaxSpeed(1000);     // maximale Geschwindigkeit (Steps/s)
  stepper.setSpeed(-220);         // konstante Geschwindigkeit (Steps/s)
}

void loop() {
  stepper.runSpeed();            // läuft konstant ohne Beschleunigung
}
