#include<stdio.h>
#include<stdlib.h>

float peso, caso_emagreca, caso_engorde; 

int main()
{
	printf("Digite seu peso:\n");
	scanf("%f",&peso);

	
		caso_emagreca= peso-5; 
		printf("Caso voce emagreca 5.0 kg, voce tera %.1f kg\n", caso_emagreca);
	
	
	
		caso_engorde=peso+5; 
		printf("Caso voce engorde 5.0 kg, voce tera %.1f kg\n",caso_engorde);
	
	
		return 0; 
	
}
