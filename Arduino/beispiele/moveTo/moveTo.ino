// Bounce.pde
// -*- mode: C++ -*-
//
// Make a single stepper bounce from one limit to another
//
// Copyright (C) 2012 Mike McCauley
// $Id: Random.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $

#include <AccelStepper.h>

AccelStepper stepper(AccelStepper::DRIVER, 22, 21);

void setup() {
  // Change these to suit your stepper if you want
  stepper.setMaxSpeed(1000);
  stepper.setAcceleration(50);
  stepper.moveTo(-44800);
}

void loop() {
  // If at the end of travel go to the other end
  /*
  if (stepper.distanceToGo() == 0) {
    stepper.moveTo(-stepper.currentPosition());
  }
  */
  stepper.run();
}
