#include <iostream>
#include <stdio.h>
using namespace std;
int const TAM = 80;
char frase[TAM];
int main()
{
  system("chcp 65001");// para usar acentos
  
  cout << "\n\n Digite uma frase com espaços: " << endl;
  gets(frase);
  fflush(stdin); //Para limpar o buffer  
  cout << "\n\n A frase digitada é: \n\n\t";
  puts (frase);
  fflush(stdin); //Para limpar o buffer  
  
  return 0;
}