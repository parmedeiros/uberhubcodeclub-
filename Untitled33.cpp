//A Olimpíada Internacional de Informática (IOI, no original em inglês) é a mais prestigiada competição de programação para alunos de ensino médio; seus aproximadamente 300 competidores se reúnem em um país diferente todo ano para os dois dias de prova da competição. Naturalmente, os competidores usam o o tempo livre para acessar a Internet, programar e jogar em seus notebooks, mas eles se depararam com um problema: o saguão do hotel só tem uma tomada.

//Felizmente, os quatro competidores da equipe brasileira da IOI trouxeram cada um uma régua de tomadas, permitindo assim ligar vários notebooks em uma tomada só; eles também podem ligar uma régua em outra para aumentar ainda mais o número de tomadas disponíveis. No entanto, como as réguas têm muitas tomadas, eles pediram para você escrever um programa que, dado o número de tomadas em cada régua, determina quantas tomadas podem ser disponibilizadas no saguão do hotel.

//Entrada
//A entrada consiste de uma linha com quatro inteiros positivos T_1T , indicando o número de tomadas de cada uma das quatro réguas.

//Saída
//Seu programa deve imprimir uma única linha contendo um único número inteiro, indicando o número máximo de notebooks que podem ser conectados num mesmo instante.

//Restrições
//2 \leq T_i \leq 62=T 

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std; 

int T1, T2, T3, T4,somatotal; 

int main()
{

	cout<<"Informe o n° de tomadas disponiveis:\n"<<endl;
	
	cin>>T1>>T2>>T3>>T4>>somatotal; 
	
	somatotal= T1+T2+T3+T4-3; 
	
	cout<<"O n° max de notebooks conectados é"<<somatotal; 
	
	return 0;
	
} 
