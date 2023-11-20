#include <stdio.h>
#include <math.h>
int main() {
/*-----------VARIABLES-----------*/	
	int age;                        /* Ici on déclare une variable pour un réel */
	char nom[30], prenom[30];       /* On déclare deux variable pour des chaines de 30 caractères */
/*-------------DEBUT-------------*/
	
/* On demande et lit les les informations de l'utilisateur */	
	printf("Entrez votre prénom ");    
	scanf("%s", prenom);
	printf("Entrez votre nom ");
	scanf("%s", nom);
	

/* Boucle vérifiant la condition que l'age soit un entier positif superieur a 2**7 */	
	do {
		printf("Entrez votre age ");
		scanf("%d", &age);
		printf("%d", age);
		} while (age>pow(2,7) || age<0);  
	

/* On affiche toutes les informations */	
	printf("Voici de que vous avez entré : \n");
	printf("Prénom : %s \n", prenom);
	printf("Nom : %s \n", nom);
	printf("Age : %d \n", age);
	
	return 0;
}
