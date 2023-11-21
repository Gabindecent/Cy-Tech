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
//teteListe ajouterFin(teteListe maListe, int donnee);

#endif