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
}
  
  
  
  
  
  /*                                         // "This is an sentence."
  str.erase (str.begin()+9);               //           ^
  std::cout << str << '\n';
                                           // "This is a sentence."
  str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
  std::cout << str << '\n';
                                           // "This sentence."

}
*/