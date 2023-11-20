#include <stdio.h>

void sapin(int nbBranches){

  int etoiles=1;

  int espaces= nbBranches-1;

  for(int i=0; i<nbBranches; i++){
    for(int n=0; n<espaces; n++){
      printf(" ");
    }

    for(int m=0; m<etoiles; m++){
      printf("*");
    }
    printf("\n");
      etoiles = etoiles +2;
      espaces = espaces-1;
  }
for(int h=0; h<2; h++){
  for(int i=0; i<nbBranches-1; i++){
    printf(" ");
  }
    printf("@ \n");
  }
}

int main(){
  int nbBranches;

  printf("saisir nb de branches");
  scanf("%d", &nbBranches);

  sapin(nbBranches);
}
