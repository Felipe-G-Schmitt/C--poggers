/*
FUP que leia um valor em metros e converta para centímetros.
FUP que leia um valor em quilometros e converta para metros.
FUP que leia uma valor em horas e converta para segundos.
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int metros, cm, km, horas, segundos;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa que calcula medidas";
	cout<<"\n Digite um número: ";
	cin>>metros;
	
	cm=metros*100;
	cout<<"\n"<<metros<<"m são "<<cm<<"cm. \n";
	
	cout<<"\n Digite um número: ";
	cin>>km;
	
	metros=km*1000;
	cout<<"\n"<<km<<"km são "<<metros<<" m. \n";
	
	cout<<"\n Digite uma quantidade em horas: ";
	cin>>horas;
	
	segundos=horas*3600;
	cout<<"\n"<<horas<<" horas são "<<segundos<<" segundos. \n";
	
	
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa