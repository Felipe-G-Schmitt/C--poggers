#include<iostream> //Inserir biblioteca para cin e cout
#include <iomanip> //biblioteca do setprecision
#include <ctype.h>
using namespace std; // Abreviar o cin e cout

char caracter;
int i,qtde_vezes;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa de caracteres";
	cout<<"\n Informe um caractere: ";
	cin>>caracter;
	cout<<"\n Informe a quantidade de vezes que quer repetir: ";
	cin>>qtde_vezes;
	
	for(i=0;i<=qtde_vezes;i++){
		cout<<"\n"<<i<<" - "<<caracter;
	}
		
	
	cout<<"\n\n\n";
} // Final do Programa