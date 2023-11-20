#include <stdio.h>

void sapin(int taille){
    
    int etoile = 1;
    int espace;

    espace=taille-1;


    for(int ligne = 0; ligne < taille; ligne++){
        for(int j=0; j<espace; j++){
            printf(" ");
        }
        espace= espace-1;
        
        for(int k=0; k<etoile; k++){
            printf("*");
        }
        printf("\n");
        etoile= etoile+2;
    }
    for(int m=0; m<taille-1; m++){
        printf(" ");
    }
    printf("@ \n");
    for(int m=0; m<taille-1; m++){
        printf(" ");
    }
    printf("@ \n");
}

int main(){
    int taille;
   
    printf("taille = ");
    scanf("%d", &taille);

    sapin(taille);

    return 0;
}
