#include <stdio.h>
#include <stdlib.h>

int PGCD(int a, int b);

int main(){
    int a;
    int b;
    int res;
    printf("Veuillez entrer un chiffre \n");
    scanf("%d", &a);
    printf("Veuillez entrer un autre chiffre \n");
    scanf("%d", &b);
    res=PGCD(a,b);
    printf("le resultat est %d \n", res);
    return 0;
}

int PGCD(int a, int b){
    int t;
    while(b!=0){
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}