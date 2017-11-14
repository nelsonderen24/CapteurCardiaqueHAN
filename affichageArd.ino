#include "param.h"
#include "coeur.c"

void setup() {

pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
}

void loop() {

switch (choixAffichage){
  case 1:
     animercoeur1();
    break;
  case 2:
     animercoeur2();
    break;
  case 3:
     animercoeur3();
    break;
  case 40:
     animercoeur40();
    break;
  case 41:
     animercoeur41();
    break;
  case 42:
     animercoeur42();
    break;
  case 43:
    animercoeur43();
    break;
  case 44:
     animercoeur44();
    break;
  case 45:
     animercoeur45();
    break;
  case 46:
     animercoeur46();
    break;
  case 47:
     animercoeur47();
    break;
  case 48:
     animercoeur48();
    break;
  case 49:
     animercoeur49();
    break;
  case 5:
     animercoeur5();
    break;
  case 6:
     animercoeur6();
    break;
  case 7:
     animercoeur7();
    break;
  case 8:
     animercoeur8();
    break;
  case 9:
     animercoeur9();
    break;
}
}
  


