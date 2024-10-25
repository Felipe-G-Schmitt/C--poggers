/*
Tendo como dados de entrada a altura de uma pessoa, construa
um programa que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) – 58.
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

float altura, pesoIdeal, pesoAtual;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa que calcula o peso ideal";
	cout<<"\n Digite a sua altura: ";
	cin>>altura;
	
	cout<<"\n Digite o seu peso: ";
	cin>>pesoAtual;
	
	pesoIdeal = (72.7 * altura) - 58;

	cout<<"\n O seu peso ideal é "<<pesoIdeal;
	
	if (pesoIdeal > pesoAtual) {
		cout<<"\n Você precisa ganhar "<<pesoIdeal-pesoAtual<<"kg.";
	} else {
		cout<<"\n Você precisa perder "<<pesoAtual-pesoIdeal<<"kg.";
	}
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa