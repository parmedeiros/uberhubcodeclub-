//A Olimp�ada Internacional de Inform�tica (IOI, no original em ingl�s) � a mais prestigiada competi��o de programa��o para alunos de ensino m�dio; seus aproximadamente 300 competidores se re�nem em um pa�s diferente todo ano para os dois dias de prova da competi��o. Naturalmente, os competidores usam o o tempo livre para acessar a Internet, programar e jogar em seus notebooks, mas eles se depararam com um problema: o sagu�o do hotel s� tem uma tomada.

//Felizmente, os quatro competidores da equipe brasileira da IOI trouxeram cada um uma r�gua de tomadas, permitindo assim ligar v�rios notebooks em uma tomada s�; eles tamb�m podem ligar uma r�gua em outra para aumentar ainda mais o n�mero de tomadas dispon�veis. No entanto, como as r�guas t�m muitas tomadas, eles pediram para voc� escrever um programa que, dado o n�mero de tomadas em cada r�gua, determina quantas tomadas podem ser disponibilizadas no sagu�o do hotel.

//Entrada
//A entrada consiste de uma linha com quatro inteiros positivos T_1T , indicando o n�mero de tomadas de cada uma das quatro r�guas.

//Sa�da
//Seu programa deve imprimir uma �nica linha contendo um �nico n�mero inteiro, indicando o n�mero m�ximo de notebooks que podem ser conectados num mesmo instante.

//Restri��es
//2 \leq T_i \leq 62=T 

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std; 

int T1, T2, T3, T4,somatotal; 

int main()
{

	cout<<"Informe o n� de tomadas disponiveis:\n"<<endl;
	
	cin>>T1>>T2>>T3>>T4>>somatotal; 
	
	somatotal= T1+T2+T3+T4-3; 
	
	cout<<"O n� max de notebooks conectados �"<<somatotal; 
	
	return 0;
	
} 
