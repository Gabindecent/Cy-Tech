#include <stdio.h>
#include <stdlib.h>

int puissanceNonTer(int a, int puissance);
int puissanceTerCachee(int a, int puissance, int acc);
int puissanceTer(int a, int puissance);

int main(){
    int a;
    int puissance;
    int res;
    printf("Bonjour, je suis le programme principal \n");
    printf("Veuillez entrer un chiffre \n");
    scanf("%d", &a);
    printf("Veuillez entrer la puissance \n");
    scanf("%d", &puissance);
    res=puissanceNonTer(a,puissance);
    printf("le resultat est %d \n", res);
    return 0;
}

int puissanceNonTer(int a, int puissance){
    if (puissance==0){
        return 1;
    }
    else { 
        return(a*puissanceNonTer(a,puissance-1));
    }
}

int puissanceTerCachee(int a, int puissance, int acc){
    if (puissance==0){
        return acc;
    }
    else { 
        return(puissanceTerCachee(a,puissance-1,acc*a));
    }
}

int puissanceTer(int a, int puissance){
    return puissanceTerCachee(a, puissance, 1);
}