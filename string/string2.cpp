#include <iostream>
#include <stdio.h>
using namespace std;
main () {
	char nome[100];
	cout<<"\n Informe uma string: ";
	gets(nome); //ler
	fflush(stdin);
	cout<<"\n\n";
	puts(nome); //imprime
	//utilizado gets e puts para poder usar o espaço, por ex nome e sobrenome
}