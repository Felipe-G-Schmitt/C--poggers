//Demonstração do uso do Switch

#include<iostream> //entrada e saida de dados
using namespace std;
int num, i;

main() 
{
  system("chcp 65001");
  system("cls");
  cout<<"\n\n Programa Exemplo SWITCH";
  cout<<"\n\n\n\n";
  
  i=0;
  cin>>num;
  do{
	cout<<"\n"<<num<<"*"<<i<<"="<<num*i;
	i++;
} while(i<=10);

cout<<"\n\n\n\n";

}