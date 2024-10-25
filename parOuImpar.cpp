/*
FUP que peça um número e imprima uma mensagem se esse número é par ou ímpar
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int num;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa de número par ou ímpar";
	cout<<"\n Digite um número: ";
    cin >> num;
    
    if (num%2==0) {
    	cout<<"\n"<<num<<" é par.";
	} else {
		cout<<"\n"<<num<<" é ímpar.";
	}
    
    
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa