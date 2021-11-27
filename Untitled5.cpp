//Faça um programa para ler dois valores inteiros AA e BB e imprima a média ponderada dos dois valores. O peso de AA é 4 e o peso de BB é 6.

//Entrada
//A entrada consiste de duas linhas. A primeira linha contém o inteiro AA e a segunda linha contém o inteiro BB.

//Saída
//A saída consiste de uma linha contendo a média ponderada (apenas a parte inteira) dos dois valores.

//Restrições
//Os inteiros fornecidos não terem valor absoluto maior que 1000.

#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std; 

int A, B,notapesoA, notapesoB, mediaAeB; 

int main()
{
    cout<<"Digite o valor da nota A: \n"<<endl; 
    cout<<"Digite o valor da nota B: \n"<<endl; 
    cin>>A>>B;
    cin>>notapesoA>>notapesoB; 
    cin>>mediaAeB;
    
    notapesoA=A*4; 
    
    notapesoB=B*6; 
    
    mediaAeB=(A*4+ B*6)/2;
    
    if(mediaAeB>=1000)
    {
    cout<<"Programa encerrado:\n"<<endl; 
	}
    
    cout<<"="<<mediaAeB; 
    
    return 0; 
}
