/*
FUP que peça um número e imprima a tabuada deste 
   número.
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int num,i,limite;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa de tabuadas";
	cout<<"\n Digite um número: ";
	cin>>num;
	
	cout<<"\n Digite o limite da tabuada: ";
	cin>>limite;
	
	cout<<"\n Tabuada normal: \n";
	for(i=0;i<=limite;i++){
		cout<<"\n"<<num<<"×"<<i<<"="<<num*i;
	}
	
	cout<<"\n\n Tabuada invertida: \n";
	for(i=limite;i>=0;i--){
		cout<<"\n"<<num<<"×"<<i<<"="<<num*i;
	}
	/*
	cout<<num<<" * 1 = "<<num*1<<"\n";
	cout<<num<<" * 2 = "<<num*2<<"\n";
	cout<<num<<" * 3 = "<<num*3<<"\n";
	cout<<num<<" * 4 = "<<num*4<<"\n";
	cout<<num<<" * 5 = "<<num*5<<"\n";
	cout<<num<<" * 6 = "<<num*6<<"\n";
	cout<<num<<" * 7 = "<<num*7<<"\n";
	cout<<num<<" * 8 = "<<num*8<<"\n";
	cout<<num<<" * 9 = "<<num*9<<"\n";
	cout<<num<<" * 10 = "<<num*10<<"\n";
	*/
	
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa