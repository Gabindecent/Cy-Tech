#include <stdio.h>

int main(){
    int nombre, a, res, derniereDecim, c;
    res = 0;
    
    printf("entrez votre nombre :");
    scanf("%d", &nombre);
    a = nombre;
    
    do{
        derniereDecim = a % 10;
        c= derniereDecim * derniereDecim * derniereDecim;
        res= res+c;
        a=a/10;
    
    }while(a>0);

    if(nombre==res)
        printf("le nombre est un nombre d'amstrong \n");
    else
        printf("le nombre n'est pas un nombre d'amstrong \n");
    
    return 0;
}