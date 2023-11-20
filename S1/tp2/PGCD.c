#include <stdio.h>

int PGCD(int x, int y){
	int t;
	
	while (y){ 
		t= y;
		y= x % y;
		x= t; 
	}
	return x;
}	

int main(){
	int x,y;
	
	printf("veuillez saisir deux entiers \n");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("le PGCD est %d \n", PGCD(x, y));
	
	return 0;
}
