#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

maillon* creerMaillon(int donnee){
    maillon* m;
    m=malloc(sizeof(maillon)*1);
    m->valeur=donnee;
    m->suivant=NULL;
    return m;
}

teteListe ajouterTete(teteListe maListe, int donnee){
    maillon* m;
    m=creerMaillon(donnee);
    m->suivant=maListe;
    return m;
}

void afficher(teteListe maListe){
    if(maListe==NULL){
        printf("\n-----\n");
        printf("LISTE VIDE\n");
        printf("-----\n");
    }
    else{
        afficherCachee(maListe);
    }
}

void afficherCachee(teteListe maListe){
    if(maListe==NULL){
        printf("-----\n");
    }
    else{
        printf("--> %d \n", maListe->valeur);
        afficherCachee(maListe->suivant);
    }
}

teteListe ajouterFin(teteListe maListe, int donnee){
    if(maListe==NULL){
        return(ajouterTete(maListe, donnee));
    }
    else{
        maListe->suivant=ajouterFin(maListe->suivant, donnee);
        return maListe;
    }
}

teteListe ajouterPos(teteListe maListe,int donnee,int pos){
    if(maListe==NULL){
        ajouterTete(maListe, donnee);
        return maListe;
    }
    else{
        if(pos==1){
            return ajouterTete(maListe, donnee);

        }
        else{
            maListe->suivant=ajouterPos(maListe->suivant, donnee, pos-1);
            return maListe;
        }
    }
}

teteListe supprimerDebut(teteListe maListe){
    if(maListe==NULL){
        return maListe;
    }
    else{
        return maListe->suivant;
    }
}

teteListe supprimerFin(teteListe maListe){
    if(maListe==NULL){
        return maListe;
    }
    else{
        if(maListe->suivant==NULL){
            return supprimerDebut(maListe);
        }
        else{
            maListe->suivant=supprimerFin(maListe->suivant);
            return maListe;
        }
    }

}

teteListe supprimerPos(teteListe maListe,int pos){
    if(maListe==NULL){
        supprimerDebut(maListe);
        return maListe;
    }
    else{
        if(pos==1){
            return supprimerDebut(maListe);
        }
        else{
            maListe->suivant=supprimerPos(maListe->suivant, pos-1);
            return maListe;
        }
    }
}


teteListe viderListe(teteListe maListe){
    return maListe=NULL;
}

teteListe supprVal(teteListe maListe, int val){
    if(maListe==NULL){
        return maListe;
    }
    else{
        if(maListe->valeur==val){
            return supprimerDebut(maListe);
        }
        else{
            maListe->suivant=supprVal(maListe->suivant, val);
            return maListe;
        }
    }
}