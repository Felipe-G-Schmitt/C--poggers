#include <iostream>
#include <string>		// Necessário para usar strings
using namespace std;
string nome1("Claudia");		// Inicializa nome1
string nome2("Werlich");	// Inicializa nome2
string nome3, nome4;		// Não inicializa nome3 nem nome4
int main()
{
	system("chcp 65001");// para usar acentos
	cout << "\n\n Os dois primeiros nomes são " << nome1 << " e   " << nome2 << endl;
	nome3 = "Amo C++";		// Inicialização posterior de nome3
	nome4 = nome3;
	cout << "\n\n O terceiro e quarto nomes são " << nome3 << " e  " << nome4 << endl;
}