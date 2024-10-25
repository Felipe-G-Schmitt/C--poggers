#include <iostream>
using namespace std;
int num1, num2;
int somar();

main()
{
	system("chcp 65001");
	cout<<"\n Informe um número: ";
	cin>>num1;
	cout<<"\n Informe outro número: ";
	cin>>num2;
	cout<<"\n O resultado é: "<<somar();
	cout<<"\n\n\n";
}
//Area das funções
//função soma
int somar()
{
	return(num1+num2);
}