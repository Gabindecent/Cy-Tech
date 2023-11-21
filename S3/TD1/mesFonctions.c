#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"


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


int PGCD(int a, int b){
    int t;
    while(b!=0){
        t=b;
        b=a%b;
        a=t;
    }
    return a;
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
