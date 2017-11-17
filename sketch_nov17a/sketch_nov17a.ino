#include "cardio.c"

int tempsPrecedent = 0;
int test = 1;
void setup() {
 Serial.begin(9600);
}

void loop() {
  if ( test == 1 && prendreMesures() >15 ) {
      int pulse = calculer (tempsPrecedent);
      Serial.print(millis());
      Serial.print(";");
      Serial.println(pulse);
      test = 0;
      tempsPrecedent = millis();
  } else if (test == 0 && prendreMesures() ==0 ){
      test = 1;
  } 
}
