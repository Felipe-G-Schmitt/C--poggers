#include <iostream>
using namespace std;
int somar(int num1, int num2);

main()
{
	int num1,num2;
	
	system("chcp 65001");
	cout<<"\n Informe um número: ";
	cin>>num1;
	cout<<"\n Informe outro número: ";
	cin>>num2;
	cout<<"\n O resultado é: "<<somar(num1,num2);
	cout<<"\n\n\n";
}
//Area das funções
//função soma
int somar(int num1, int num2)
{
	return(num1+num2);
}