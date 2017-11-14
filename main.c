#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"
#include "menu.h"

int main()
{
    int affichage=choisirAffichage();
    creerParam(affichage);
    return 0;
}
