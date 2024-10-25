/*
3 números, imprimir o maior e o menor, imprimir em ordem crescente e depois em ordem decrescente
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int num1, num2, num3;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa da ordem de números";
	cout<<"\n Digite um número: ";
	cin>>num1;
	
	cout<<"\n Digite o segundo número: ";
	cin>>num2;
	
	cout<<"\n Digite o terceiro número: ";
	cin>>num3;
	
	cout<<"\n";
	
	if ((num1>num2) && (num1>num3)) {
		cout<<num1<<" maior";
	} else if ((num2>num1) && (num2>num3)) {
		cout<<num2<<" maior";
	} else {
		cout<<num3<<" maior";
	}
	
	cout<<"\n";
	
	if ((num1<num2) && (num1<num3)) {
		cout<<num1<<" menor";
	} else if ((num2<num1) && (num2<num3)) {
		cout<<num2<<" menor";
	} else {
		cout<<num3<<" menor";
	}
	
	cout<<"\n\n Ordem crescente \n";
	
	//Primeiro número da ordem crescente
	if ((num1<num2) && (num1<num3)) {
		cout<<num1;
	} else if ((num2<num1) && (num2<num3)) {
		cout<<num2;
	} else {
		cout<<num3;
	}
	
	cout<<"\n";
	
	//Segundo número da ordem crescente
	if ((num1<num2) && (num1>num3)) {
		cout<<num1;	
	} else if ((num1>num2) && (num1<num3)) {
		cout<<num1;
	} else if ((num2<num1) && (num2>num3)) {
		cout<<num2;	
	} else if ((num2>num1) && (num2<num3)) {
		cout<<num2;
	} else if ((num3<num1) && (num3>num2)) {
		cout<<num3;	
	} else if ((num3>num1) && (num3<num2)) {
		cout<<num3;
	}
	
	cout<<"\n";
	
	//Terceiro número da ordem crescente
	if ((num1>num2) && (num1>num3)) {
		cout<<num1;	
	} else if ((num2>num1) && (num2>num3)) {
		cout<<num2;
	} else {
		cout<<num3;
	}
	
	
	
	cout<<"\n\n Ordem decrescente \n";
	
	//Primeiro número da ordem decrescente
	if ((num1>num2) && (num1>num3)) {
		cout<<num1;	
	} else if ((num2>num1) && (num2>num3)) {
		cout<<num2;
	} else {
		cout<<num3;
	}
	
	cout<<"\n";
	
	//Segundo número da ordem decrescente
	if ((num1>num2) && (num1<num3)) {
		cout<<num1;	
	} else if ((num1<num2) && (num1>num3)) {
		cout<<num1;
	} else if ((num2>num1) && (num2<num3)) {
		cout<<num2;	
	} else if ((num2<num1) && (num2>num3)) {
		cout<<num2;
	} else if ((num3>num1) && (num3<num2)) {
		cout<<num3;	
	} else if ((num3<num1) && (num3>num2)) {
		cout<<num3;
	}
	
	cout<<"\n";
	
	//Terceiro número da ordem decrescente
	if ((num1<num2) && (num1<num3)) {
		cout<<num1;
	} else if ((num2<num1) && (num2<num3)) {
		cout<<num2;
	} else {
		cout<<num3;
	}
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa