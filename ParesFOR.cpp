#include<iostream> //Inserir biblioteca para cin e cout
#include <iomanip> //biblioteca do setprecision
#include <ctype.h>
using namespace std; // Abreviar o cin e cout

int i,num;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa de número pares com FOR";
	cout<<"\n\n";
	
	cout<<"****Pares****\n\n";
	// Par
	for(i=0;i<=1000;i++){
		if (i%2==0) {
    		cout<<" → "<<i;
		} else {
			cout<<"";
		}
	}
	
	cout<<"\n\n****Impares****\n\n";
	// Impar
	for(i=0;i<=1000;i++){
		if (i%2==0) {
    		cout<<"";
		} else {
			cout<<" → "<<i;
		}
	}
		
	
	cout<<"\n\n\n";
} // Final do Programa