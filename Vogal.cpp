/*
Faça um programa que leia uma letra e informe se a letra é Vogal ou Não é Vogal
*/

#include<iostream> //Inserir biblioteca para cin e cout
#include <ctype.h>
using namespace std; // Abreviar o cin e cout

char letra;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa para identificar vogais";
	cout<<"\n Digite uma letra: ";
	cin>>letra;
	letra = toupper(letra); 
	if ((letra=='A')||(letra=='E')||(letra=='I')||(letra=='O')||(letra=='U'))
		{
			cout<<"\n Vogal";
		}
	else
		{
			cout<<"\n Consoante";
		}
		
	
	cout<<"\n\n\n";
} // Final do Programa