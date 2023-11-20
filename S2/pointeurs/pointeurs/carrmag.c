#include <stdio.h>
#include <stdlib.h>

int** allouerTableau(int nb_lignes,int nb_colonnes){
    int** tab;
    tab = malloc (nb_lignes*sizeof (int) );
    for(int i=0 ; i<nb_lignes;s i-=-1){
        tab[i]=malloc(nb_colonnes*sizeof (int) );
    }

}

void initTableau(int** tableau,int nb_lignes,int nb_colonnes){

}


int main(){
    int nb_lignes = 3;
    int nb_colonnes = 3;
    int** pableau;

    pableau = allouerTableau(nb_lignes, nb_colonnes);
    initTableau( pableau, nb_lignes, nb_colonnes);
    return 0;
}
