#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int i;
int j;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa que desenha com FOR";
	cout<<"\n\n";

	cout<<"****Piramide****\n\n";
	for(i=1;i<=20;i++){ // For externo, ira fazer uma repetição de 20 linhas
		for(j=1;j<=i;j++){ // For interno, controla o número de caracteres conforme o valor de "i" aumenta,o limitando, nesta parte: j<=i
			cout<<"*"; // o caracter que será repetido
		}
		cout<<"\n"; // Após uma repetição ser concluida no for interno, será pulada uma linha
	}
		
	
	cout<<"\n\n\n";
} // Final do Programa