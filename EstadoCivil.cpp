/*
Faça um programa que peça uma letra referente ao estado civil da pessoal.
Para cada estado civil - Improma uma mensagem
*/

#include<iostream> //Inserir biblioteca para cin e cout
#include <ctype.h>
using namespace std; // Abreviar o cin e cout

char estado;

main(){
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa para estado civil";
	cout<<"\n Digite S para solteiro, C para casado, V para viuvo e D para Divorciado: ";
	cin>>estado;
	estado = toupper(estado); 
	if (estado== 'S') {
		cout<<"\n Solteiro(a)";
	} else {
		if (estado== 'C') {
			cout<<"\n Casado(a)";
		}
		else {
			if (estado == 'V') {
				cout<<"\n Viuvo(a)";
			}
				else {
					if(estado == 'D') {
						cout<<"\n Divorciado(a)";	
				}
			}
		}
	}
	
} //Fim do programa