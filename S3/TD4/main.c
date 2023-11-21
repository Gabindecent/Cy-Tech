#include <stdio.h>
#include "arbre.h"

int main(){

    arbre monArbre = NULL;
    monArbre=creerArbreBinaire(42,creerArbreBinaire(24,NULL,NULL),creerArbreBinaire(53,creerArbreBinaire(21,NULL,NULL),creerArbreBinaire(55,NULL,NULL)));
    printf("%d \n",taille(monArbre));
    printf("%d \n",hauteur(monArbre));
    return 0;
}