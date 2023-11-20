#ifndef LISTES_H
#define LISTES_H

typedef struct maillon{
    int valeur;
    struct maillon* suivant;

}maillon;

typedef maillon* teteListe;


maillon* creerMaillon(int donnee);
teteListe ajouterTete(teteListe maListe, int donnee);
void afficher(teteListe maListe);
void afficherCachee(teteListe maListe);
teteListe ajouterFin(teteListe maListe, int donnee);
teteListe ajouterPos(teteListe maListe,int donnee,int pos);
teteListe supprimerDebut(teteListe maListe);
teteListe supprimerFin(teteListe maListe);
teteListe supprimerPos(teteListe maListe,int pos);
teteListe viderListe(teteListe maListe);
teteListe supprVal(teteListe maListe, int val);
#endif