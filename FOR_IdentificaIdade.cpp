/*
3. FUP que leia a idade de 5 pessoas. Após calcule e imprima: 
a. A menor idade do grupo; 
b. A maior idade do grupo.
 
*/
 
#include<iostream> //entrada e saida de dados
using namespace std;
int i,idade,maior,menor;
 
main() 
{
  system("chcp 65001");
  system ("color E0");
  cout<< "\n ** PROGRAMA DAS IDADES **";
  cout<<"\n\n";
  	
	for (i=1;i<=5;i++){ 
   		cout<<"\n Digite a "<<i<<" ª idade:  ";
   		cin>>idade; 
   		
   	if (i==1) //só funciona uma vez
	   { // serve para inicializar o maior e o menor
   		maior = idade;
   		menor = idade;
   	}
   	
   	if (idade>maior)
     	maior = idade;
   	if (idade<menor)
     	menor = idade;
}//fecha o FOR

  cout<<"\n A maior idade informada foi: "<<maior;
  cout<<"\n A menor idade informada foi: "<<menor;
  
  cout<<"\n\n\n";
}