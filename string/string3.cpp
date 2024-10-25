#include <iostream>
using namespace std;
int const TAM = 100;
char nome[TAM];
main(){
	cout<<"\n Informe uma string: ";
	cin.getline(nome,TAM);
	cout<<"\n\n"<<nome;
}