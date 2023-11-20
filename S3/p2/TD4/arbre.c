#include "arbre.h"
#include <stddef.h>
#include <stdlib.h>


arbre creerArbreBinaire (int val, arbre filsG_User, arbre filsD_User){
    arbre a=NULL;
    a=malloc(sizeof(noeud)*1);
    a->donnee=val;
    a->filsG=filsG_User;
    a->filsD=filsD_User;
    return a;
}

int taille(arbre a){
    if (a==NULL){
        return 0;
    }
    else{
        return 1+(taille(a->filsG) + taille(a->filsD));
    }
}

int estFeuille(arbre a){
    return (a->filsG==NULL && a->filsD==NULL);
}

int max(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int hauteur(arbre a){
    if (a==NULL || estFeuille(a)){
        return 0;
    }
    else{
        return 1+max(hauteur(a->filsG), hauteur(a->filsD));
}
}