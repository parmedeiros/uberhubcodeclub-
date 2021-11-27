#include<stdio.h>
#include<stdlib.h>

int idadex,idadey;

int main()
{
	printf("Informe sua idade\n:"); 
	scanf("%d",&idadex);
	
	printf("Informe sua idade de novo\n:");
	scanf("%d",&idadey);

	idadex=idadex-5;
	printf("5 anos atras voce tinha %d anos\n",idadex);

	idadey=idadey+5;
	printf("Daqui 5 anos voce vai ter %d anos\n",idadey);
	
	return 0; 
}
