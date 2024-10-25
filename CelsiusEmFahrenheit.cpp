/*
FUP que leia uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int tempC,tempF;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa que converte Celsius em Fahrenheit";
	cout<<"\n Digite uma temperatura: ";
    cin >> tempC;
    
    tempF=(9*tempC+32)/5;
    if (tempF<0) {
    	cout<<"\n"<<tempF<<"°F é negativa";
	} else if ((tempF>9) && (tempF<39)){
		cout<<"\n"<<tempF<<"°F é uma temperatura mediana";
	} else if (tempF>38) {
		cout<<"\n"<<tempF<<"°F é uma temperatura muito quente";
	} else {
		cout<<"\n >:(";
	}
    
    
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa