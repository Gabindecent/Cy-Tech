#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int sommeTer(int nb,int acc){
    if (strlen(nb) == 1){
        return nb;
    }
    else {  
        nb = nb % 10;
        acc = acc +11;
        sommeTer(nb, acc);
    }
}

int main(){
    int nb;
    int acc;
    printf("votre chiffre ? : ");
    scanf("%d", &nb);
    sommeTer(nb, acc);
    return 0;
}