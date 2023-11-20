#ifndef PILE_H
#define PILE_H
/* Le prototype/signature de toutes mes fonctions/procédures */


enum fleche{ROUGE, VERTE, BLEUE};

struct Pile{
    int maFleche;
    struct Pile* suivant;
};

struct Pile empiler (struct Pile p, int valeur);
int depiler (struct Pile* p);
void afficherP(struct Pile p);
int compterP(struct Pile p, int acc);
struct Pile inverserP(struct Pile p1);
struct Pile doublerP(struct Pile p);
struct Pile viderP (struct Pile p);


#endif