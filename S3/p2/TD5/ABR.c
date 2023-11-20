#include <stdio.h>
#include <stdlib.h>
#include "ABR.h"

arbre creerArbreBinaire (int val, arbre filsG, arbre filsD){
    arbre a=NULL;
    a=malloc(sizeof(noeud)*1);
    a->donnee=val;
    a->filsG=filsG;
    a->filsD=filsD;
    return a;
}

void parcoursInfixe(arbre a){
    if (a==NULL){
        printf("Arbre vide");
    }
    else{
        afficherInfixe(a);
    }
}

void afficherInfixe(arbre a){
    if (a!=NULL){
        afficherInfixe (a.filsG );
        printf("val : " + a.val);
        afficherInfixe (a.filsD );
    }
}