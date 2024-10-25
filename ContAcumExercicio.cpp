/* leia 20 números e verifique
 
* A quantidade de numeros pares e a quantidade de numeros impares
* A soma de todos os numeros pares
* A media dos numeros impares
* A quantidade de numeros negativos
* O maior e o menor numero inserido
*/
 
#include<iostream> 
using namespace std;
 
int num;
int cont_par, cont_impar, acum_par, acum_impar, media_impar, cont_negat, maior, menor = 0;
 
main() 
{
system("chcp 65001");
cout<<"\n\t    PROGRAMA COM CONTADOR E ACUMULADOR \n\n";
cout<<"\n INFORME 20 NÚMEROS\n\n";
for (int i=1; i<=20 ;i++)
{
   cout<<"\n Informe o "<<i<<"º número: ";
   cin>>num;
   
   if (num%2==0){ // pares
		cont_par++;
   } else { // impares
   		cont_impar++;
   }
   
   if (num%2==0){ // soma pares
   		acum_par=acum_par + num;
   }
   
   if(!num%2==0){ // media impares
   		acum_impar = acum_impar + num;
   }
   
   if(num<0){
   		cont_negat++;
   }
   
   if(num>maior){
   		maior=num;
   }
   
   if(num<menor){
   		menor=num;
   }
}

acum_impar = acum_impar/5;

cout<<"\n Foram informados:  "<<cont_par<<" números pares";
cout<<"\n Foram informados:  "<<cont_impar<<" números ímpares";
cout<<"\n A soma dos números pares foi:  "<<acum_par;
cout<<"\n A média dos números ímpares foi:  "<<acum_impar;
cout<<"\n Foram informados:  "<<cont_negat<<" números negativos";
cout<<"\n O maior números foi:  "<<maior;
cout<<"\n O menor números foi:  "<<menor;

 

cout<<"\n\n\n\n"; 
}