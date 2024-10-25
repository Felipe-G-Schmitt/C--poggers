/*
Faça um programa que leia 2 números inteiros e calcule a soma dos números e imprima o resultado

Unidade de entrada - tudo o que o programa pede pro usuario (Ex: as variaveis)
Processamento - algo que vai ser processado ou calculado pelo programa
Unidade de saída - mostra o resultado do que foi processado ou calculado
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int num1;
int dobro;
int triplo;
int quintuplo;
/*
int num2;
int soma;
int subtra;
int multi;
*/

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa de calculos de variáveis";	

	cout<<"\n Informe um número: ";
	cin>>num1;
	
	dobro = num1 * 2;
	cout<<"\n O dobro do número é: " <<dobro;
	
	triplo = num1 * 3;
	cout<<"\n O triplo do número é: " <<triplo;
	
	quintuplo = num1 * 5;
	cout<<"\n O quintuplo do número é: " <<quintuplo;
	
	

	
/*
	cout<<"\n Informe mais um número: ";
	cin>>num2;
	
	soma = num1 + num2;
	cout<<"\n A soma dos números é: " <<soma;
	
	subtra = num1 - num2;
	cout<<"\n A subtração dos números é: " <<subtra;
	
	multi = num1 * num2;
	cout<<"\n A multiplicação dos números é: " <<multi;
*/
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa