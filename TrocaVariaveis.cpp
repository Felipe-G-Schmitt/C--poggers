/*
Leia dois valores A e B, faça um programa que efetue a troca dos valores de forma que a variável A passe a possuir o valor da 
variável B e a variável B passe a possuir o valor da variável A. 
Apresentar os valores das variáveis antes e depois de trocados.
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

float A, B, temp;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa que troca o valor das variáveis";
	cout<<"\n Digite um número: ";
	cin>>A;
	
	cout<<"\n Digite outro número: ";
	cin>>B;
	
	cout<<"\n A antes: "<<A;
	cout<<"\n B antes: "<<B;
	
	temp = A;
	A = B;
	B = temp;
	
	cout<<"\n A depois: "<<A;
	cout<<"\n B depois: "<<B;
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa