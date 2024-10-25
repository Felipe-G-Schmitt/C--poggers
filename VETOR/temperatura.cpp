/*
FUP que leia um vetor de 10 temperaturas
Calcule a média das temperaturas

Verifique quantas vezes a temperatura ficou menor
que a média das temperaturas
*/

#include<iostream>
using namespace std;
int const TAM = 10;
float temp[TAM],menor=0,acumM=0,media;
int i;

main()
{
      system("chcp 65001");
  	  cout<<"\n \t Programa Vetores de temperatura: menor e média \n";
      	for(i=1;i<=TAM;i++){
		  temp[i]=rand()%50;
		  cout<<" - "<<temp[i]<<"\n";
		  acumM=acumM+temp[i];
        }
        acumM=acumM/TAM;
        
        for(i=0;i<=TAM;i++){
        	if(temp[i]<acumM){
        		menor++;
			}
		}
        cout<<"\n A média das temperaturas foi: "<<acumM;
        cout<<"\n Teve "<<menor<<" temperaturas menores que a média";
        cout<<"\n\n\n";
} 
