#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatoire(){
    srand(time(NULL));
    return rand()% (100+1);
}

int main(){
    int choix, cible, compte;
    cible= aleatoire();
    compte= 1;

    printf("Entrez un nombre \n");
    scanf("%d", &choix);

    while(choix != cible){
        if (choix > cible){
            printf("Trop grand \n");
            scanf("%d", &choix);
        } 
        else {
            printf("Trop petit \n");
            scanf("%d", &choix);
        }
        compte=compte+1;
    }
    printf("Bravo c'est gagné \n");
    printf("Trouvé en %d essais \n",compte);
    return 0;
}