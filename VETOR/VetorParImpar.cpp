//Leia 100 números e conte os pares e os ímpares. Com vetor

#include<iostream> 
#include<iomanip> 

using namespace std;
int i,numeros[100],par=0,impar=0;
const int TAM = 5; //Altera a quantidade de números que ser

main() 
{
  system("chcp 65001");
  system("cls");
  cout<<"\n\n Digite "<<TAM<<" números inteiros: \n";
  for(i=0;i<TAM;i++){ //Lendo o vetor
  	cin>>numeros[i];
  	if(numeros[i]%2==0){
  		par++;
	  }
	  else {
	  	impar++;
	  }
  }
  cout<<"\n A quantidade de PARES foi: "<<par;
  cout<<"\n A quantidade de IMPARES foi: "<<impar;
  cout<<"\n\n\n";
}