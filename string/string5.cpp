#include <iostream>
#include <string>
using namespace std;
string nome1="Claudia",nome2=" Werlich";
main(){
	system("chcp 65001");
	string nome3 = nome1 + nome2;
	cout<<"\n Nome1: "<<nome1;
	cout<<"\n Nome2: "<<nome2;
	cout<<"\n Nome3: "<<nome3;
}