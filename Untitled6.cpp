//Faça um programa que leia dois números inteiros digitados pelo teclado e imprima a soma deles.

//Entrada
//A entrada consiste de dois números inteiros XX e YY, um em cada linha.

//Saída
//A saída do seu programa deve ser um inteiro SS, representando a soma de XX e YY.

#include<iostream>
using namespace std; 

int X, Y, soma; 

int main()
{
    cout<< "Digite o valor de X:\n "<<endl; 
    cout<< "Digite o valor de Y:\n "<<endl; 
    cin>> X >>Y;
    
    soma= X + Y; 
    
    cout<< "S="<<soma; 
    
    return 0; 
    

}
