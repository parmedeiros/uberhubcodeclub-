#include<stdio.h>
#include<stdlib.h>

float altura_inicial, altura_final, total; 

int main()
{
	printf("Qual sua altura inicial, Daniel?\n");
	printf("Digite um numero:\n");
	scanf("%f",&altura_inicial);
	
	printf("Qual sua altura final, Daniel?\n");
	printf("Digite um outro numero:\n"); 
	scanf("%f",&altura_final);
	
	total=altura_final-altura_inicial; 
	printf("Parabens Daniel por comer tanto brocolis, voce cresceu %.2f metros",total);
	
	return 0; 
	
}
