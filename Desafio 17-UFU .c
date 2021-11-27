#include<stdio.h>
#include<stdlib.h>

float A,B, multiplicacao, divisao; 

int main()
{
	printf("Digite um numero decimal:\n");
	scanf("%f", &A); 
	
	printf("Digite um outro numero decimal:\n");
	scanf("%f", &B); 
	
	multiplicacao=A*B; 
	
	printf("MULTIPLICACAO: %.2f\n", multiplicacao);
	
	divisao=A/B; 
	
	printf("DIVISAO: %.2f\n", divisao);
	
	return 0; 
	
	
}
