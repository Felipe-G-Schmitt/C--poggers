// Lista de exercicios FOR

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int i;
int j;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa que desenha com FOR";
	cout<<"\n\n";

	cout<<"****Piramide simples****\n\n";
	for(i=1;i<=5;i++){ 
		for(j=1;j<=i;j++){ 
			cout<<" *"; 
		}
		cout<<"\n"; 
	}
	
	cout<<"\n\n";
	
	cout<<"****Piramide simples flipada****\n\n";
	for(i=1;i<=5;i++){ 
		for(j=i;j<=5;j++){ 
			cout<<" "; 
		}
		for(j=1;j<=i;j++){ 
			cout<<"*"; 
		}
		cout<<"\n"; 
	}
	
	cout<<"\n\n";
	
	cout<<"****Piramide simples invertida****\n\n";
	for(i=1;i<=5;i++){ 
		for(j=i;j<=5;j++){ 
			cout<<" *"; 
		}
		cout<<"\n"; 
	}
	
	cout<<"\n\n";
	
	cout<<"****Piramide simples invertida flipada****\n\n";
	for(i=1;i<=5;i++){ 
		for(j=i;j<=5;j++){ 
			cout<<" "; 
		}
		for(j=i;j<=5;j++){ 
			cout<<" *"; 
		}
		cout<<"\n"; 
	}
	
	cout<<"\n\n"; // Final do programa
}