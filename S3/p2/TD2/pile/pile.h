#ifndef PILE_H
#define PILE_H
/* Le prototype/signature de toutes mes fonctions/procédures */


enum fleche{ROUGE, VERTE, BLEUE};

struct pile{
    int maFleche;
    struct pile* suivant;
}
#endif