/*
FUP para calcular o valor do volume de uma lata de óleo
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

float altura,raio,volume;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa que calcula o volume de uma lata de óleo";
	cout<<"\n Digite o raio da lata: ";
    cin >> raio;
    
    cout<<"\n Digite a altura da lata: ";
    cin >> altura;
    
    volume=3.14159*(raio*raio)*altura;
    
    cout<<"\n O volume da lata é: "<<volume;
    
    
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa