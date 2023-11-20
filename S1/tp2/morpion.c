#include <stdio.h>
#include <stdlib.h>

void affGrille(char grille[3][3] ){
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("|%c", grille[i][j]); 
        }
        printf("|\n"); 
    }
}

typedef struct Joueur{
    char nom[30];
    int age; 
    char symbole;
} Joueur;

int main(){
    char grille[3][3] = {"   ","   ","   "};
    Joueur j1,j2;
    
    printf("entre votre nom joueur 1");
    scanf("%s",j1.nom);
    printf("Quel age avez vous joueur 1");
    scanf("%d",&j1.age);
    printf("entre votre nom joueur 2");
    scanf("%s",j2.nom);
    printf("Quel age avez vous joueur 2");
    scanf("%d",&j2.age);
    j1.symbole=1;
    j2.symbole=2;
    
    affGrille(grille);

    return 0;
}
    
    
    /*
    determiner joueur
      loop tant que (verifLigne == 0)
         print la grille 
            demander case tant que case libre
            verif ligne 
                cas 1 -> j1 gagne 
                cas 2 -> j2 gagne
                cas -1 -> partie nulle
                cas 0-> partie pas terminée
        */
        