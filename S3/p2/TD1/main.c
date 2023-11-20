#include "fonction.h"
#include <stdio.h>
#include <stdlib.h>

int affichageMenu(int choixMenu)
{
     int choixMenu
     int a;
     int b;
     int res;
     int puissance;
     printf("---Menu---\n\n");
     printf("1. Calcul puissance\n");
     printf("2. PGCD\n");
     printf("3. Somme \n");
     printf("\nVotre choix?\n\n");
     scanf("%d", &choixMenu);
}
int main(int argc, char *argv[])
{
    switch(choixMenu)
    {
        case 1:
            printf("Bonjour, je suis le programme principal \n");
            printf("Veuillez entrer un chiffre \n");
            scanf("%d", &a);
            printf("Veuillez entrer la puissance \n");
            scanf("%d", &puissance);
            res=puissanceNonTer(a,puissance);
            printf("le resultat est %d \n", res);
            break;
        case 2:
            printf("Veuillez entrer un chiffre \n");
            scanf("%d", &a);
            printf("Veuillez entrer un autre chiffre \n");
            scanf("%d", &b);
            res=PGCD(a,b);
            printf("le resultat est %d \n", res);              
            break;
        case 3:
            printf("Veuillez entrer un chiffre \n");
            scanf("%d", &a);
            res=somme(a,0);
            printf("le resultat est %d \n", res);              
            break;   
    }
     
  system("PAUSE"); 
  return 0;
}