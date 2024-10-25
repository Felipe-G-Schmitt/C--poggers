#include<iostream> //Inserir biblioteca para cin e cout
#include <iomanip> //biblioteca do setprecision
#include <ctype.h>
using namespace std; // Abreviar o cin e cout

char letra;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa teste uma letra";
	cout<<"\n Digite F para feminino ou M para masculino: ";
	cin>>letra;
	letra = toupper(letra); //deixar a letra sempre em maiuscula
	if (letra=='F')
		{
			cout<<"\n F-Feminino";
		}
	else
		{if(letra=='M'){
				cout<<"\n M-Masculino";
			} else {
				cout<<"\n :/";
			}
		}
		
	
	cout<<"\n\n\n";
} // Final do Programa