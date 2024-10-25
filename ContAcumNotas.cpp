/* Programa para calcular notas escolares
 
* Media das notas
* Numero de alunos que passaram (nota maior que 60)
* Numero de alunos que precisam de recuperacao (nota entre 40 e 59)
* Numero de alunos reprovador (nota menor que 40)
*/
 
#include<iostream> 
using namespace std;
 
int num, num_alu;
int media_notas, alu_pass, alu_recu, alu_repr = 0;
 
main() 
{
system("chcp 65001");
cout<<"\n\t    PROGRAMA DE NOTAS ESCOLARES \n\n";
cout<<"\n INFORME A QUANTIDADE DE ALUNOS:";
cin>>num_alu;

cout<<"\n\n";

for (int i=1; i<=num_alu ;i++)
{
   cout<<"\n Informe a nota do "<<i<<"º aluno: ";
   cin>>num;
   
   media_notas=media_notas+num;
   
   if (num>=60) {
   		alu_pass++;
   }
   
   if (num>39 && num<60) {
   		alu_recu++;
   }
   
   if (num<40) {
   		alu_repr++;
   }
}

media_notas=media_notas/num_alu;

cout<<"\n A média das notas foi:  "<<media_notas;
cout<<"\n A quantidade de alunos que passaram foi:  "<<alu_pass;
cout<<"\n A quantidade de alunos que precisam de recuperação foi:  "<<alu_recu;
cout<<"\n A quantidade de alunos que reprovaram foi:  "<<alu_repr;

cout<<"\n\n\n\n"; 
}