/*
FUP que peça um número e imprima uma mensagem se esse número é positivo ou negativo
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int num;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa de número negativo ou positivo";
	cout<<"\n Digite um número: ";
    cin >> num;
    
    if (num>0) {
    	cout<<"\n"<<num<<" é positivo.";
	} else {
		cout<<"\n"<<num<<" é negativo.";
	}
    
    
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa