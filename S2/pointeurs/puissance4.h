#ifndef __puissance4_H_
#define __puissance4_H_
int** allouer(int ligne, int colone);
//allouer une matrice NxN
void initialiser(int** maGrille,int ligne, int colone);
//initialiser toutes les cases de le maGrille à -1
void afficher(int** maGrille,int ligne, int colone);
//afficher le maGrille
int jouer(int** maGrille,int taille, int joueur);
int aGagne(int** maGrille,int taille);
void tourDeJeu(int** maGrille,int taille);
void libere (int** maGrille,int taille);

#endif