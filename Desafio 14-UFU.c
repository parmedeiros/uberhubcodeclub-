#include<stdio.h>
#include<stdlib.h>

int total, B, M, L; 

int main()
{
	printf("Digite a qtd de bananas:\n");
	scanf("%d",&B); 
	
	printf("Digite a qtd de macas:\n "); 
	scanf("%d",&M);
	
	printf("Digite a qtd de laranjas:\n");
	scanf("%d",&L);
	
	total=B+M+L; 
	printf("Dona Joaninha comprou %d frutas", total);
	
	return 0;
}

