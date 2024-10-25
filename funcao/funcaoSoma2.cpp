#include <iostream>
using namespace std;
int result, num1, num2;
int somar();

main()
{
	system("chcp 65001");
	cout<<"\n Informe um número: ";
	cin>>num1;
	cout<<"\n Informe outro número: ";
	cin>>num2;
	result = somar();
	cout<<"\n O resultado é: "<<result;
	cout<<"\n\n\n";
}
//Area das funções
//função soma
int somar()
{
	int somar;
	somar=num1 + num2;
	return(somar);
}