#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int const TAM = 100;
char frase1[TAM];		
char frase2[TAM];
main()
{
  system("chcp 65001");// para usar acentos
  cout<<"\n Testando o Tipo String";
  cout<<"\n Digite uma frase: ";
  gets(frase1);	
  fflush(stdin); //Para limpar o buffer 
  cout<<"\n Digite outra frase: ";	
  gets(frase2);
  fflush(stdin); //Para limpar o buffer  
	if (strcmpi(frase1,frase2)>0)
		cout <<frase1 << "é MAIOR que  " << frase2<<endl;
	else if (strcmpi(frase1,frase2)==0)
		cout << "As frases são iguais " <<endl;
	else
		cout << frase2 << " é MAIOR que  " <<frase1<<endl;
}