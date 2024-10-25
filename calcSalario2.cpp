/*
Modifique o progama 2(da lista) deduza 13% do valor
   a receber pelo trabalhador. Esse valor é do INSS.
   Imprima: o salário bruto, quanto de imposto foi 
   tirado do salário e o salário final.
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int valHora, horas, salarioBru, salarioLiq;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa de calcular o salario por hora";
	cout<<"\n Digite quanto você recebe por hora: ";
	cin>>valHora;
	
	cout<<"\n Digite quantas horas você trabalha por dia: ";
	cin>>horas;
	
	salarioBru=valHora*horas;
	cout<<"\n O seu salário bruto por mês é: "<<salarioBru<<" reais.";
	
	salarioLiq=salarioBru*0.87;
	cout<<"\n O seu salário líquido por mês é: "<<salarioLiq<<" reais.";
	
	cout<<"\n"<<salarioBru*0.13<<" foram convertidos para o INSS.";
	
	
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa