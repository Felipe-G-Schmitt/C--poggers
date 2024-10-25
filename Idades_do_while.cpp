//idades Do_while

#include<iostream> 
#include<iomanip> 

using namespace std;
int i,acum_idades=0,idade;
const int TAM=3;
float media=0;
char resp;

main() 
{
 
do
{

  system("chcp 65001");
  system("cls");
  cout<<"\n\n Programa Idades Fofas";
  for (i=1;i<=TAM;i++)
  {
  	do{
  		media=0;
  		acum_idades=0;
  		cout<<"\n\n Digite a idade da " <<i<<" ª Pessoa:  ";
  		cin>>idade;
  		if ((idade<0)||(idade>145))
  		{
  			cout<<"\n\n ERRO DE DIGITAÇÃO" ;
  			cout<<"\n\n Digite a idade da " <<i<<" ª Pessoa:  ";
  		    cin>>idade;
		}
	}while((idade<0)||(idade>145));
	acum_idades = acum_idades + idade;
  }
  media = acum_idades / TAM;
  cout<<"\n\n A média das idades é: " <<media;
  cout<<"\n\n\n Deseja repetir? [S]- Sim ou [N] - Não  \n ";
  cin>>resp;
  resp = toupper (resp);
}while (resp != 'N');
  cout<<"\n\n\n\n";
}