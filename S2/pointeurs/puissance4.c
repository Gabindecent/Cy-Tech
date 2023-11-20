#include "puissance4.h"
#include <stdlib.h>

int** allouer(int ligne, int colone){
    int** grille;
    grille = malloc(ligne * sizeof(int*));
    for(i=0, i<ligne, i++){
        grille[i] = malloc(colone * sizeof(int));
    }
 return grille;
}

void initialiser(int** maGrille,int ligne, int colone){
    for (int i=0;i<ligne;i++){
        for (int j=0;j<colone;j++){
        maGrille[i][j]=-1;
        }
    }
}

void afficher(int** maGrille,int ligne, int colone){

}
