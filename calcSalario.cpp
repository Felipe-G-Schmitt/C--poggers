/*
FUP que leia o valor da hora do trabalhador e a 
   quantidade de horas trabalhadas. Imprima o valor
   que o trabalhador deverá receber ao final do mês.
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int valHora, horas, salario;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa de calcular o salario por hora";
	cout<<"\n Digite quanto você recebe por hora: ";
	cin>>valHora;
	
	cout<<"\n Digite quantas horas você trabalha por dia: ";
	cin>>horas;
	
	salario=valHora*horas;
	cout<<"\n Você recebe: "<<salario<<" reais por mês.";
	
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa