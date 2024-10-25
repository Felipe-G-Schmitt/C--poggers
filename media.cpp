/*
Faça um programa que peça 4 notas de um aluno.
Calucule e imprima a média do aluno
*/

#include<iostream> //Inserir biblioteca para cin e cout
#include <iomanip> //biblioteca do setprecision
using namespace std; // Abreviar o cin e cout

float nota1;
float nota2;
float nota3;
float nota4;
float soma;
float media;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<fixed<<setprecision(2); //deixar o float com duas cadas decimais
	cout<<"\n\t Programa verifica a média \n";	

	cout<<"\n Informe uma nota: ";
	cin>>nota1;
	
	cout<<"\n Informe a segunda nota: ";
	cin>>nota2;
	
	cout<<"\n Informe a terceira nota: ";
	cin>>nota3;
	
	cout<<"\n Informe a quarta nota: ";
	cin>>nota4;
	
	media = (nota1+nota2+nota3+nota4)/4;
	cout<<"Sua média é: "<<media;
	
	if (media >= 7) {
		cout<<"\n Classe media";
	} else {
		if (media >= 5) {
			cout<<"\n Uber";
		}
		else {
			cout<<"\n Frentista";	
		}
	}
	/*soma=nota1+nota2+nota3+nota4;
	media=soma/4;
	cout<<"\n A média foi: "<<media;*/
	
	cout<<"\n\n\n";
} // Final do Programa