#include "generationCode.h"
#include "menu.h"

void creerParam(int affichage) {
  FILE *fichier=NULL;
  fichier = fopen("param.h", "w+");
  char nombreAffichage[3];
  char parametrage[]="#define choixAffichage ";
  sprintf(nombreAffichage, "%d", affichage);
  char *param = strcat(&parametrage, &nombreAffichage);
  fputs(param, fichier);
  fclose(fichier);
}
