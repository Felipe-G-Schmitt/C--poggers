#include <iostream>
#include <string>

using namespace std;
string frase1;		
string frase2;
main()
{
  system("chcp 65001");// para usar acentos
  cout<<"\n Testando o Tipo String";
  cout<<"\n Digite uma frase: ";
  getline( cin, frase1);	
  fflush(stdin); //Para limpar o buffer 
  cout<<"\n Digite outra frase: ";	
  getline( cin, frase2);
  fflush(stdin); //Para limpar o buffer  
	if(frase1 > frase2)
		cout <<frase1 << "é MAIOR que  " << frase2<<endl;
	else if(frase1 == frase2)
		cout << "As frases são iguais " <<endl;
	else
		cout << frase2 << " é MAIOR que  " <<frase1<<endl;
}