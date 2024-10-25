/*
FUP que leia um número, chame uma função e passe como parametro o numero lido.
A função devera retornar ZERO se o número for NEGATIVO ou retornar UM se o número for POSITIVO
*/

#include <iostream>
using namespace std;
int posNeg(int num);
int num, resultado;

main()
{
	system("chcp 65001");
	cout<<"\n FUNÇÃO PARA NUM POSITIVO E NEGATIVO \n\n";
	cout<<"\n\n Informe um número inteiro: ";
	cin>>num;
	resultado=posNeg(num);
	if(resultado==0){
		cout<<"\n O número é negativo";
	} 
	if (resultado==1){
		cout<<"\n O número é positivo";
	}
	
	cout<<"\n\n\n";
}
//Area das funções
int posNeg(int num){
	if (num>=0) {
    	return(1);
	} 
	else {
    	return(0);
	}
}