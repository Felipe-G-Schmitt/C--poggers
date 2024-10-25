//idades Do_while

#include<iostream> 
#include<iomanip> 

using namespace std;
int i,numeros[10];

main() 
{
  system("chcp 65001");
  system("cls");
  cout<<"\n\n Digite 10 números inteiros: \n";
  for(i=0;i<10;i++){ //Lendo o vetor
  	cin>>numeros[i];
  }
  cout<<"\n IMPRIMINDO O VETOR ";
  for(i=0;i<10;i++){//Imprimir
  	cout<<" "<<numeros[i];//Imprimindo o vetor
  }
  cout<<"\n\n\n";
}