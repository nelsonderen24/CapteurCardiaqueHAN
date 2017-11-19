#include "menu.h"
#include "generationCode.h"


void choisirAffichage(){
  int numeroLED=0;
  int affichage=1;
  printf("Bienvenue dans le menu. Veuillez choisir le type d'affichage :\n"
          "1 - Toutes les LEDs allumees\n"
          "2 - 1 LED sur 2 allumee\n"
          "3 - 1 LED sur 3 allumee\n"
          "4 - 1 seule LED allumee au choix\n"
          "5 - Mode chenille\n"
          "6 - Mode chenille par 2\n"
          "7 - Mode boomerang\n"
          "8 - Mode chenille inversee\n"
          "9 - Mode chenille inversee par 2\n"
          "0 - Quitter menu\n");
  scanf("%d", &affichage);
  switch (affichage) {
  case 0:
    printf("Fermeture du menu");
    break;
  case 1:
    creerParam(affichage);
    break;
  case 2:
    creerParam(affichage);
    break;
  case 3:
    creerParam(affichage);
    break;
  case 4:
    printf("Choisir le numero de la LED a allumer (0 - 9) :\n");
    scanf("%d", &numeroLED);
    if (numeroLED<0 || numeroLED>9){
      printf("Erreur du choix, fermeture du menu\n");
    }
    affichage = (affichage*10)+numeroLED;
    creerParam(affichage);
    break;
  case 5:
    creerParam(affichage);
    break;
  case 6:
    creerParam(affichage);
    break;
  case 7:
    creerParam(affichage);
    break;
  case 8:
    creerParam(affichage);
    break;
  case 9:
    creerParam(affichage);
    break;
  default:
    printf("Mauvais parametre, fermeture du menu\n");
    break;
  }
}
