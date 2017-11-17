#include "cardio.h"
#include <Arduino.h>

float prendreMesures (){
  return analogRead(0);
}

float calculer (int tempsPrecedent){
  int temps = millis();
  float pulse = 60000/(temps - tempsPrecedent);
  return pulse;
}


