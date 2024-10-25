#include <iostream>
#include <string>
using namespace std;
string nome1="Claudia ",nome2=" Werlich";
main()
{
  system("chcp 65001");
  string nome3 = nome1 + nome2;
  cout <<"\n Nome3: "<<nome3;
  for(int i=0; i<nome3.length(); i++)
  {
  	cout<<"\n "<<nome3.substr(i);
  }
}