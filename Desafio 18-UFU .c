#include<stdio.h>
#include<stdlib.h>

int idadex,total; 
float peso, caso_emagreca, caso_engorde; 

int main()
{
	printf("Informe sua idade\n:"); 
	scanf("%d",&idadex);
	
	total=idadex-2;
	printf("2 anos atras voce tinha %d anos\n",total);

	total=idadex+2;
	printf("Daqui 2 anos voce vai ter %d anos\n",total);
	

	printf("Digite seu peso:\n");
	scanf("%f",&peso);

	caso_emagreca= peso-5; 
	printf("Caso voce emagreca 5.0 kg, voce tera %.1f kg\n", caso_emagreca);
	
	caso_engorde=peso+5; 
	printf("Caso voce engorde 5.0 kg, voce tera %.1f kg\n",caso_engorde);


	return 0;
	
}
