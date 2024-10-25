/* leia 10 números e verifique
 
* Quantos (contador) destes valores são negativos. 
* A soma de todos (acumular) os números positivos.
Imprima uma mensagem na tela com a quantidade de números 
negativos e a soma. 
*/
 
#include<iostream> 
using namespace std;
 
int num;
int cont_negativo=0;
int acum_num_positivos=0;
 
main() 
{
system("chcp 65001");
cout<<"\n\t    PROGRAMA COM CONTADOR E ACUMULADOR \n\n";
cout<<"\n INFORME 10 NÚMEROS\n\n";
for (int i=1; i<=10 ;i++)
{
   cout<<"\n Informe o "<<i<<"º número: ";
   cin>>num;
   
   if (num<0) { //Toda vez que negativo soma + 1
       cont_negativo++;
   }
   
   if (num>=0) { //É positivo? Acumular os valores
       acum_num_positivos=acum_num_positivos + num;
   }
}
cout<<"\n Foram informados:  "<<cont_negativo<<" números negativos";
cout<<"\n A soma dos Positivos:  "<<acum_num_positivos;
 

cout<<"\n\n\n\n"; 
}