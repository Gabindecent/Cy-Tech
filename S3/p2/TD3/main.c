#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

int main(){
    teteListe maListe=NULL;

    creerMaillon(1);
    maListe=ajouterTete(maListe,2);
    maListe=ajouterTete(maListe,3);
    maListe=ajouterFin(maListe,4);
    maListe=ajouterPos(maListe,15,3);
    afficher(maListe);
    maListe=supprimerPos(maListe,3);
    afficher(maListe);
    maListe=supprVal(maListe,4);
    afficher(maListe);
    return 0;
}

