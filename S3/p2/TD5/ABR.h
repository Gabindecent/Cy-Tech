#ifndef ABR_H
#define ABR_H

typedef struct noeud {
  int val;
  struct noeud* filsG;
  struct noeud* filsD;
}noeud;

typedef noeud* arbre;

arbre creerArbreBinaire (int val, arbre filsG, arbre filsD);
void parcoursInfixe(arbre a);

#endif