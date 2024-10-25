/*
Programa para Exemplificar os comandos
Os comandos do C++
Variáveis acima do main()

cin -> leitura
cout -> escrever na tela 
char -> um caractere
float -> numeros decimais
int -> numeros inteiros
*/
#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int idade;
float salario;
char letra;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa de Variáveis";
	
	cout<<"\n Informe sua idade: ";
	cin>>idade;
	
	cout<<"\n Informe seu salário: ";
	cin>>salario;
	
	cout<<"\n Informe uma letra: ";
	cin>>letra;
	
	
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa