#include <iostream>
using namespace std;
int const TAM = 80;
char frase[TAM];
int main()
{
  system("chcp 65001");// para usar acentos
  
  cout << "\n\n Digite uma frase com espaços: "<<endl;
  cin.getline(frase, TAM);
  cout << "\n\n A frase digitada é: \n\n\t" <<frase<< endl;
  return 0;
}