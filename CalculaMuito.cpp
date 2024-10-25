/*
FUP que leia um número e imprima:
  * esse número ao quadrado;
  * a raiz quadrada deste número;
  * o triplo deste número;
  * o dobro deste número.
*/

#include<iostream> //Inserir biblioteca para cin e cout
#include <cmath>
using namespace std; // Abreviar o cin e cout

double num;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa que calcula muita coisa";
	cout<<"\n Digite um número: ";
	
    cin >> num;
    cout << "\n Esse número ao quadrado é: "<<num*num;
    cout << "\n A raiz quadrada deste número é: "<<sqrt(num);
    cout << "\n O triplo desse número é: "<<num*3;
    cout << "\n O dobro desse número é: "<<num*2;
	
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa