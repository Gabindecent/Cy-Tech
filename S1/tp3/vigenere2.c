#include <stdio.h>
#include <string.h>
#define N 100
/*void initialiserMatrice( char texte[], char cle[]){
    printf("Entrez votre message secret: ");
    fgets(texte,sizeof(char),stdin);
    printf("entrez la clé de cryptage");
    fgets(cle,sizeof(char),stdin);
    int longeurTxt = strlen(texte);
    int longeurCle = strlen(cle);

}
*/
void transformerMatrice( char texte[100], char cle[100], int longeurTxt, int longeurCle){
   int i;
   int j;

    for (i = 0, j = 0; i < longeurTxt; i++, j++)
    {
        if (j == longeurCle) {
            j = 0;
        }
        texte[i] = ((texte[i] + cle[j]) % 25) + 'A';
    }
}

void affMatrice(char texte[], int longeurTxt){
    for(int i=0; i<longeurTxt ; i++){
        printf("|%c", texte[i]);
    }
        printf("|");
}

int main(){
    char texte[100];
    char cle[100];

    printf("Entrez votre message secret: ");
    fgets(texte,sizeof(char)*N,stdin);
    printf("entrez la clé de cryptage: ");
    fgets(cle,sizeof(char)*N,stdin);
    int longeurTxt = strlen(texte);
    int longeurCle = strlen(cle);

    //initialiserMatrice(texte, cle);
    transformerMatrice(texte, cle, longeurTxt, longeurCle);
    affMatrice(texte, longeurTxt);
 
    return 0; 
}