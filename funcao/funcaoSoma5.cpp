#include <iostream>
using namespace std;
int num1, num2;
//função inline
int somar()
{
	int soma;
	soma=num1 + num2;
	return(soma);
}
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