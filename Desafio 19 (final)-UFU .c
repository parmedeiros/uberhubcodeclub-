#include<stdio.h>
#include<stdlib.h>

float A,B, soma, subtracao, multiplicacao, divisao; 

int main()
{
	printf("Digite um numero inteiro:\n");
	scanf("%f", &A); 
	
	printf("Digite um outro numero inteiro:\n");
	scanf("%f", &B); 
	
	soma=A+B; 
	
	printf("SOMA: %.f\n",soma);
	
	subtracao=A-B; 
	
	printf("SUBTRACAO: %.f\n", subtracao);
	
	multiplicacao=A*B; 
	
	printf("MULTIPLICACAO: %.f\n", multiplicacao);
	
	divisao=A/B; 
	
	printf("DIVISAO: %.2f\n", divisao);
	
	return 0; 
	
	
}
