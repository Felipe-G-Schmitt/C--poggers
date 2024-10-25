/*
FUP que leia um vetor referente a altura de 10 pessoas. 
Calcule:
A média das alturas.
Mostre a maior altura informada no vetor.
Mostre a menor altura informada no vetor.
*/

#include<iostream>
using namespace std;
int const TAM = 6;
float altura[TAM],maior,menor,acum=0,media;
int i;

main()
{
      system("chcp 65001");
  	  cout<<"\n \tPrograma Vetores de Altura: MAIOR e MENOR Altura do Vetor \n";
      for(i=1;i<=5;i++)
         {
		  cout<<"\n Informe a  " <<i<<"ª Altura:  ";
          cin>>altura[i];
          acum=acum+altura[i];
          if (i==1)
		   { maior = altura[i];
		     menor = altura[i];
		   }
         if (altura[i] > maior)
              {  maior = altura[i];
  		      }
		  if (altura[i]  < menor)
              {	menor = altura[i];
  			  }	  
         }
        media= acum/TAM;
        cout<<"\n A média das Alturas informadas é: "<<media;
        cout<<"\n A menor Altura informada foi: "<<menor;
        cout<<"\n A maior Altura informada foi: "<<maior;
        cout<<"\n\n\n";
} 
