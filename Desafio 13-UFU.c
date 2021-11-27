#include<stdio.h>
#include<stdlib.h>

float qtd_total, valor1; 
int main()
{
	printf("Digite um valor: \n"); 
	scanf("%f",&valor1); 
	
	qtd_total=valor1*2;  
	printf("Juntos Mine e Craft tem %.2f reais",qtd_total);
	
	return 0; 
	
}
