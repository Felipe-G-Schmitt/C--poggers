/* Programa que manipula idade, sexo e a altura
 
* média de todas as idade e altura
* media das alturas e das idades das mulheres e homens
* quantidade de mulheres acima de 1,70m
* quantidade de homens acima de 1,90m
* quantidade de homens abaixo de 1,70m
* maior e menor altura de todos
* maior e menor idade de todos
* maior altura e maior idade dos homens
* menor altura e menor idade das mulheres
*/
 
#include<iostream> 
using namespace std;
 
int num, num_pessoas, sexo, altura, idade, alturaMenor, idadeMenor, alturaMenorM, idadeMenorM, alturaMenorF, idadeMenorF;
int media_idade, media_altura, media_alt_M, media_alt_F, cont_M, cont_F, cont_AltM, cont_AltF, cont_AltM2, alturaMaior, idadeMaior, alturaMaiorM, alturaMaiorF, idadeMaiorM, idadeMaiorF  = 0;
 
main() 
{
system("chcp 65001");
cout<<"\n\t    PROGRAMA DE NOTAS ESCOLARES \n\n";
cout<<"\n INFORME A QUANTIDADE DE PESSOAS:";
cin>>num_pessoas;

cout<<"\n\n";

for (int i=1; i<=num_pessoas ;i++)
{
	cout<<"\n Informe o sexo da "<<i<<"º pessoa: ";
	cout<<"\n [1] para masculino";
	cout<<"\n [2] para feminino";
	cin>>sexo;
	cout<<"\n";
	
	switch (sexo) {
		case 1:{
			sexo==1;
			break;
		}
		case 2:{
			sexo==2;
			break;
		}
	}
	
   
	cout<<"\n Informe a altura da "<<i<<"º pessoa: ";
	cin>>altura;
	cout<<"\n";
   
	cout<<"\n Informe a idade da "<<i<<"º pessoa: ";
	cin>>idade;
	cout<<"\n";
 
	media_idade=media_idade+idade; //media das idades gerais
	media_altura=media_altura+altura; //media das alturas gerais
	
	if(sexo==1){
		cont_M++; // contador masculino
	}
	if(sexo==2){
		cont_F++; // contador feminino
	}
	
	if(sexo==1){
		media_alt_M=media_alt_M+altura; // media altura Masculina
	}
	if(sexo==2){
		media_alt_F=media_alt_F+altura; // media altura feminina
	}
	
	if(sexo==2){
		if (altura>170) {
			cont_AltF++; // contador mulheres acima de 1,70m
		}
	}
	
	if(sexo==1){
		if (altura>190) {
			cont_AltM++; // contador homens acima de 1,90m
		}
	}
	
	if(sexo==1){
		if (altura<170) {
			cont_AltM2++; // contador homens abaixo de 1,70m
		}
	}
	
	if(altura>alturaMaior){
		alturaMaior=altura; // altura maior
	}
	
	if(altura<alturaMenor){
		alturaMenor=altura; // altura menor
	}
	
	if(idade>idadeMaior){
		idadeMaior=idade; // idade maior
	}
	
	if(idade<idadeMenor){
		idadeMenor==idade; // idade menor
	}
	
	if (sexo==1) {
		if(altura>alturaMaiorM){
			alturaMaiorM=altura; // altura maior homen
		}
	}
	
	if (sexo==1) {
		if(idade>idadeMaiorM){
			idadeMaiorM=idade; // idade maior homen
		}
	}
	
	if (sexo==2) {
		if(altura>alturaMaiorF){
			alturaMaiorF=altura; // altura maior mulher
		}
	}
	
	if (sexo==2) {
		if(idade>idadeMaiorF){
			idadeMaiorF=idade; // idade maior mulher
		}
	}
	
	if (sexo==1) {
		if(altura<alturaMenorM){
			alturaMenorM=altura; // altura menor homen
		}
	}
	
	if (sexo==1) {
		if(idade<idadeMenorM){
			idadeMenorM=idade; // idade menor homen
		}
	}
	
	if (sexo==2) {
		if(altura<alturaMenorF){
			alturaMenorF=altura; // altura menor mulher
		}
	}
	
	if (sexo==2) {
		if(idade<idadeMenorF){
			idadeMenorF=idade; // idade menor mulher
		}
	}
}
media_alt_M=media_alt_M/cont_M; // media altura Masculina
media_alt_F=media_alt_F/cont_F; // media altura feminina
media_idade=media_idade/num_pessoas; //media das idades gerais
media_altura=media_altura/num_pessoas; //media das alturas gerais

cout<<"\n A média das idades foi:  "<<media_idade;
cout<<"\n A média das alturas foi:  "<<media_altura;
cout<<"\n A média das alturas dos homens foi:  "<<media_alt_M;
cout<<"\n A média das alturas das mulheres foi:  "<<media_alt_F;
cout<<"\n A quantidade de mulheres acima de 1,70m foi:  "<<cont_AltF;
cout<<"\n A quantidade de homens acima de 1,90m foi:  "<<cont_AltM;
cout<<"\n A quantidade de homens abaixo de 1,70m foi:  "<<cont_AltM2;
cout<<"\n A maior altura foi:  "<<alturaMaior;
cout<<"\n A menor altura foi:  "<<alturaMenor; 
cout<<"\n A maior idade foi:  "<<idadeMaior;
cout<<"\n A menor idade foi:  "<<idadeMenor; 
cout<<"\n A maior altura dos homens foi:  "<<alturaMaiorM;
cout<<"\n A maior idade dos homens foi:  "<<idadeMaiorM;
cout<<"\n A maior altura das mulheres foi:  "<<alturaMaiorF; 
cout<<"\n A maior idade das mulheres foi:  "<<idadeMaiorF;
cout<<"\n A menor altura dos homens foi:  "<<alturaMenorM; //
cout<<"\n A menor idade dos homens foi:  "<<idadeMenorM;
cout<<"\n A menor altura das mulheres foi:  "<<alturaMenorF;
cout<<"\n A menor idade das mulheres foi:  "<<idadeMenorF;

cout<<"\n\n\n\n"; 
}