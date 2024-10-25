#include <iostream>
#include <string>
using namespace std;

main ()
{
  system("chcp 65001");
  string frase ("Este é um exemplo de uma frase.");
  cout << frase <<"\n";
  frase.erase (10,8);//Começa no 10 e termina depois de 8 carac.               
  cout << frase <<"\n";
                                     
  frase.erase (frase.begin()+9);               
  cout << frase << "\n";
                                         
  frase.erase (frase.begin()+5, frase.end()-9);  
  cout << frase << "\n";
}
