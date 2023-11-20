#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void transformerMatrice(char motACrypter[100], char matrice[100][100], int taille ){
    int m=0;
    for(int i=0; i<taille; i++){
        for(int j=0; j<taille; j++){
            if (m>strlen(motACrypter) || motACrypter[m]=='\n' || motACrypter[m]=='\0'){
                matrice[i][j]=' ';
            }
            else{ 
            matrice[i][j]= motACrypter[m];
            }
            m=m+1;
        }
    }

}

void affMatrice(char matrice[100][100], int taille){
    for(int i=0; i<taille ; i++){
        for( int j=0; j<taille; j++){
            printf("|%c", matrice[i][j]);
        }
        printf("|\n");
    }
}

int main(){
    char motACrypter[50];
    char matrice[100][100];
    int taille=6;
    printf("entrez votre mot : ");
    fgets(motACrypter,sizeof(char)*taille*taille,stdin);
    transformerMatrice( motACrypter, matrice, taille );
    affMatrice( matrice, taille);
    
    return 0;
}
