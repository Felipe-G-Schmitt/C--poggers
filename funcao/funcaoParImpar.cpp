/*
FUP que leia um número, chame uma função e passe como parametro o numero lido.
A função devera retornar ZERO se o número for PAR ou retornar UM se o número for IMPAR
*/

#include <iostream>
#include "clawer2.h"
using namespace std;
int num, resultado;

main()
{
	system("chcp 65001");
	cout<<"\n FUNÇÃO PARA NUM PAR E IMPAR \n\n";
	cout<<"\n\n Informe um número: ";
	cin>>num;
	resultado=parImpar(num);
	if(resultado==0){
		cout<<"\n O número é par";
	} 
	if (resultado==1){
		cout<<"\n O número é ímpar";
	}
	
	cout<<"\n\n\n";
}
//Area das funções