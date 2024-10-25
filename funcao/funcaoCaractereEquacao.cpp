/*
FUP que leia dois numeros floats e um caractere referente 
ao um dos sinais; + - * / e que devem ser passados para a função
Conforme o sinal devera ser realizado o calculo e retornado 
o valor para ser impresso no programa principal
*/

#include <iostream>
using namespace std;
float multi(int num1, int num2);
float subt(int num1, int num2);
float soma(int num1, int num2);
float divi(int num1, int num2);
float num1, num2, resultadoMult, resultadoSubt, resultadoSoma, resultadoDiv;
char opcao;

float soma(int num1, int num2) {
	return(num1+num2);
}

float subt(int num1, int num2) {
	return(num1-num2);
}

float multi(int num1, int num2) {
	return(num1*num2);
}

float divi(int num1, int num2) {
	return(num1/num2);
}

main()
{
	system("chcp 65001");
	cout<<"\n FUNÇÃO PARA CALCULAR COM SINAIS \n\n";
	cout<<"\n\n Informe o primeiro número: ";
	cin>>num1;
	cout<<"\n\n Informe o segundo número: ";
	cin>>num2;
do{
	system("cls");
	cout<<"\n===============================================";
  	cout<<"\nEscolha uma opção:";
  	cout<<"\n===============================================";
  	cout<<"\n";
	cout<<"\n [+] - Somar";
  	cout<<"\n [-] - Subtrair";
  	cout<<"\n [*] - Multiplicação";
  	cout<<"\n [/] - Divisão";
  	cout<<"\n [1] - Sair";
  	cout<<"\n Selecionado: ";
	cin>>opcao;
	
	switch (opcao)
  {
   case '+':{ 
			resultadoSoma=soma(num1, num2);
			cout<<"\n Resultado da soma: \n";
			cout<<num1<<" + "<<num2<<" = "<<resultadoSoma;
        	system("pause");
            	cout<<"\n\n\n";
   	        break;
          }
   case '-':{ 
			resultadoSubt=subt(num1, num2);
			cout<<"\n Resultado da subtração: \n";
			cout<<num1<<" - "<<num2<<" = "<<resultadoSubt;
        	system("pause");
            	cout<<"\n\n\n";
   	        break;
          }
   case '*':{ 
			resultadoMult=multi(num1, num2);
			cout<<"\n Resultado da multiplicação: \n";
			cout<<num1<<" * "<<num2<<" = "<<resultadoMult;
        	system("pause");
            	cout<<"\n\n\n";
   	        break;
          }
   case '/':{ 
			resultadoDiv=divi(num1, num2);
			cout<<"\n Resultado da divisão: \n";
			cout<<num1<<" / "<<num2<<" = "<<resultadoDiv;
        	system("pause");
            cout<<"\n\n\n";
   	        break;
          }
    case 1:{
    	cout<<"\n\n Tchau";
		
		system("pause");
        cout<<"\n\n\n";
		break;
	}
}
}while (opcao != 1);
	cout<<"\n A";
	cout<<"\n\n\n";
}