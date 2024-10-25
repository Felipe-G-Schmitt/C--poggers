/*
FUP que leia um número. Imprima o sucessor e o antecessor do número informado.
*/

#include<iostream> //Inserir biblioteca para cin e cout
#include <ctype.h>
using namespace std; // Abreviar o cin e cout

int num, ant, suc;

main(){
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa para sucessor e o antecessor do número informado";
	cout<<"\n Informe um número inteiro: ";
	cin>>num;
	ant=num-1;
	suc=num+1;
	cout<<"\n O antecessor é "<<ant;
	cout<<"\n O sucessor é "<<suc;
	
} //Fim do programa