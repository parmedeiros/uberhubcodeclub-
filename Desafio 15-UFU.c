#include<stdio.h>
#include<stdlib.h>

float X, Y; 

int main()
{
	printf("Digite a qtd de ovos:\n");
	scanf("%f",&X);
	
	Y=X*0.30; 
	printf("O total da compra foi de R$ %.2f\n",Y);
	
	return 0; 
	
	
}

