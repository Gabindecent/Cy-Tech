#ifndef ARBRE_H
#define ARBRE_H

/* RAPPEL */
typedef struct noeud {
  int donnee;
  struct noeud* filsG;
  struct noeud* filsD;
}noeud;

typedef noeud* arbre;

arbre creerArbreBinaire (int val, arbre filsG_User, arbre filsD_User);
int taille(arbre a);
int estFeuille(arbre a);
int hauteur(arbre a);
int nbFeuilles(arbre a);

#endif