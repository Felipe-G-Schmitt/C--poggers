#include<iostream> //Inserir biblioteca para cin e cout
#include <iomanip> //biblioteca do setprecision
#include <ctype.h>
using namespace std; // Abreviar o cin e cout


int i,num_inicia,qtde_vezes;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa de caracteres";
	cout<<"\n Informe o número que iniciará a sequencia: ";
	cin>>num_inicia;
	cout<<"\n Informe o número que terminará a sequencia: ";
	cin>>qtde_vezes;
	
	if(num_inicia<qtde_vezes){
		for(i=num_inicia;i<=qtde_vezes;i++){
			cout<<"\n"<<i;
		}	
	} else if {
		cout<<"\n Valores trocados: \n";
		for(i=qtde_vezes;i<=num_inicia;i++){
			cout<<"\n"<<i;
		}
	}
	
		
	
	cout<<"\n\n\n";
} // Final do Programa