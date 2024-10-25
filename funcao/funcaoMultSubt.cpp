/*
FUP que tenha duas funções: uma para multiplicar e outra para subtrair
o programa principal devera ler tres numeros inteiros e eles devem ser passados para as funções
o resultado devera ser impresso no programa principal
*/

#include <iostream>
using namespace std;
int multi(int num1, int num2, int num3);
int subt(int num1, int num2, int num3);
int num1, num2, num3, resultadoMult, resultadoSubt;

main()
{
	system("chcp 65001");
	cout<<"\n FUNÇÃO PARA MULTIPLICAR E SUBTRAIR \n\n";
	cout<<"\n\n Informe o primeiro número: ";
	cin>>num1;
	cout<<"\n\n Informe o segundo número: ";
	cin>>num2;
	cout<<"\n\n Informe o terceiro número: ";
	cin>>num3;
	resultadoMult=multi(num1, num2, num3);
	resultadoSubt=subt(num1, num2, num3);
	cout<<"\n Resultado da multiplicação: \n";
	cout<<num1<<" * "<<num2<<" * "<<num3<<" = "<<resultadoMult;
	cout<<"\n Resultado da subtraçãoção: \n";
	cout<<num1<<" - "<<num2<<" - "<<num3<<" = "<<resultadoSubt;
	
	cout<<"\n\n\n";
}
//Area das funções
int multi(int num1, int num2, int num3) {
	return(num1*num2*num3);
}

int subt(int num1, int num2, int num3) {
	return(num1-num2-num3);
}
