/*
FUP que leia um número e calcule a tabuada deste número
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int num1,tabuada1,tabuada2,tabuada3,tabuada4,tabuada5,tabuada6,tabuada7,tabuada8,tabuada9,tabuada10;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n\t Programa de calculos de variáveis";	

	cout<<"\n Informe um número: ";
	cin>>num1;
	
	tabuada1=num1*1;
	tabuada2=num1*2;
	tabuada3=num1*3;
	tabuada4=num1*4;
	tabuada5=num1*5;
	tabuada6=num1*6;
	tabuada7=num1*7;
	tabuada8=num1*8;
	tabuada9=num1*9;
	tabuada10=num1*10;
	cout<<"\n A tabuada deste número é: \n";
	cout<<tabuada1 <<"\n";
	cout<<tabuada2 <<"\n";
	cout<<tabuada3 <<"\n";
	cout<<tabuada4 <<"\n";
	cout<<tabuada5 <<"\n";
	cout<<tabuada6 <<"\n";
	cout<<tabuada7 <<"\n";
	cout<<tabuada8 <<"\n";
	cout<<tabuada9 <<"\n";
	cout<<tabuada10 <<"\n";
	
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa