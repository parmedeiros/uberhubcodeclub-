//Bino está aprendendo a multiplicar números e gostaria da sua ajudar para apresentar a tabuada de um determinado valor inteiro XX.

//Entrada
//A entrada consiste em uma única linha contendo o valor inteiro XX.

//Saída
//A saída consiste de 10 linhas. A i-éssima linha constem a mensagem "x * i = valor", onde x é o valor de XX, ii representa a o identificar da linha e o valorvalor é o valor da múltiplicação de X*iX*i

//Restrições
//0 \leq X \leq 10000=X=1000

#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std; 

int X, valordexvezes1,valordexvezes2,valordexvezes3,valordexvezes4,valordexvezes5; 
int valordexvezes6,valordexvezes7,valordexvezes8,valordexvezes9,valordexvezes10; 
int main()
{
    cout<<"Digite um numero:\n "<<endl; 
    cin>>X>>valordexvezes1>>valordexvezes2>>valordexvezes3>>valordexvezes4>>valordexvezes5; 
    cin>>valordexvezes6>>valordexvezes7>>valordexvezes8>>valordexvezes9>>valordexvezes10; 
    
	if(X>=0 && X<=1000)
	{
	valordexvezes1=X*1; 
        
    valordexvezes2=X*2; 
        
    valordexvezes3=X*3;
        
    valordexvezes4=X*4;
        
    valordexvezes5=X*5;
        
    valordexvezes6=X*6;
        
    valordexvezes7=X*7;
        
    valordexvezes8=X*8;
        
    valordexvezes9=X*9;
        
    valordexvezes10=X*10;
    
    cout<<"="<<valordexvezes1;
      cout<<"="<<valordexvezes2;
        cout<<"="<<valordexvezes3;
          cout<<"="<<valordexvezes4;
            cout<<"="<<valordexvezes5;
              cout<<"="<<valordexvezes6;
                cout<<"="<<valordexvezes7;
                  cout<<"="<<valordexvezes8;
                    cout<<"="<<valordexvezes9;
                      cout<<"="<<valordexvezes10;
	}
	
	   else
    {
    	cout<<"Process exited after 4.876 seconds with return value 0 "<<endl;
	}

	return 0; 
}
