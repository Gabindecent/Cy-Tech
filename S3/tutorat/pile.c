#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int valeur;
    struct element* suivant;
}element;
typedef element* pile;

pile empiler(pile p, int val){
    pile nvp=malloc(sizeof(int)*1);
    nvp->valeur=val;

    if (p!=NULL){
        nvp->suivant=p;
        nvp->valeur=val;
    }
    p=nvp;

    return p;
}

pile depiler(pile p){
    p=p->suivant;
    return p;    
}

void afficherPile(pile p){
    if (p->suivant==NULL){
        printf("--\n");
    }
    else{
        printf("%d \n",p->valeur);
        afficherPile(p->suivant);
    }
}


int main(){
    pile p;
    p=NULL;
    p=empiler(p,4);
    p=empiler(p,5);
    p=empiler(p,6);
    p=empiler(p,7);
    afficherPile(p);
    p=depiler(p);
    afficherPile(p);
    return 0;
}
