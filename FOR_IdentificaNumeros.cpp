/*
FUP que leia 10 numeros e verifique quantos destes valores sao negativos. 
Imprima uma mensagem na tela com a quantidade de numeros negativos
*/
#include<iostream> //Inserir biblioteca para cin e cout
#include <iomanip> //biblioteca do setprecision
#include <ctype.h>
using namespace std; // Abreviar o cin e cout

int i, num, contador_negativos, contador_par, contador_7;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa que verifica quantos valores são negativos";
	
	cout<<"\n Informe 10 números \n";
	
	for(int i=1;i<=10;i++){
		cout<<"\n Informe o "<<i<<"° número: ";
		cin>>num;
		
		if (num<0){
			contador_negativos = contador_negativos + 1;
		}
		if (num%2 == 0) {
			contador_par = contador_par + 1;
		}
		if (num%7 == 0){
			contador_7 = contador_7 + 1;
		}
	}	
	
	cout<<"\n Teve "<<contador_negativos<<" números negativos";
	cout<<"\n Teve "<<contador_par<<" números pares";
	cout<<"\n Teve "<<contador_7<<" números multiplos de 7";
	
	cout<<"\n\n\n";
} // Final do Programa