//Demonstração do uso do Switch

#include<iostream> //entrada e saida de dados
using namespace std;
int i,idade,media,acumula;

main() 
{

  system("chcp 65001");
  system("cls");
  cout<<"\n\n ======== Programa de desenho com SWITCH ========";
  cout<<"\n\n\n\n";
  
  for(i=1;i<=3;i++){
  	do{
  		cout<<"\n\n Digite a idade da "<<i<<"ª Pessoa: ";
  		cin>>idade;
  		if((idade<0)||(idade>145)) {
  			cout<<"\n\n ATENÇÃO IDADE ERRADA";
  			cout<<"\n\n Digite a idade novamente da "<<i<<"ª Pessoa: ";
  			cin>>idade;
		  }
	  } while ((idade<0)||(idade>145));
	  	acumula=acumula+idade;
  	}
  media=acumula/i;
  cout<<"\n\n"<<media;
}