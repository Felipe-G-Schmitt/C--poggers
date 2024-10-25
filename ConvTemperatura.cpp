/*
Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é : F = (9*C+160)/5
Sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

float TempC, TempF;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa que calcula o temperaturas em Fahrenheit";
	cout<<"\n Digite a temperatura em Celsius: ";
	cin>>TempC;
	
	TempF=(9*TempC+160)/5;
	cout<<"\n Essa é a temperatura em Fahrenheit: "<<TempF<<"°F.";
	
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa