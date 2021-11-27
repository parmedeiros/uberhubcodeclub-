#include<stdio.h>
#include<stdlib.h>

int qtd_total, periodo_manha, periodo_tarde; 

int main()
{
	printf("Periodo da manha:\n");
	printf("Informe a qtd de carros estacionados:\n");
	scanf("%d",&periodo_manha);
	
	printf("Periodo da tarde:\n");
	printf("Informe a qtd de carros estacionados novamente:\n");
	scanf("%d",&periodo_tarde);
	
	qtd_total=periodo_manha-periodo_tarde; 
	printf("Ainda restam %d carros no estacionamento do Seu Jose\n", qtd_total);
	
	return 0; 
	
}
