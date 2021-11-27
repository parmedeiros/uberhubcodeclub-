#include<stdio.h>
#include<stdlib.h>

int A, B, subtracao; 

int main()
{
	printf("Digite um numero:\n");
	scanf("%d",&A);
	
	printf("Digite um segundo numero:\n ");
	scanf("%d",&B);
	
	subtracao=A-B; 
	
	printf("SUBTRACAO:%d\n",subtracao);
	
	return 0; 
}
