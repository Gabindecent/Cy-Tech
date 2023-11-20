#include <stdio.h>
#include <stdlib.h>

int somme(int a, int acc);

int main(){
    int a;
    int res;
    printf("Veuillez entrer un chiffre \n");
    scanf("%d", &a);
    res=somme(a,0);
    printf("le resultat est %d \n", res);
    return 0;
}

int somme(int a,int acc){
    int reste;
        if(a==0){
            return acc;  
        }
        else{
            acc=a%10 + acc;
            reste= a/10;
            return somme(reste, acc);
        }
}
