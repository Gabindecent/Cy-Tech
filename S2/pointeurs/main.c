#include <stdio.h>
#include "puissance4.h"

int main(){
    int ligne, colone;
    int** maGrille = allouer(ligne, colone);
    ligne=6;
    colone=7;
    
    initialiser(maGrille, ligne, colone);
    
    return 0;
}