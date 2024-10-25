/*
FUP que tenha uma função que receba uma letra,
verifique a letra
retorne ZERO se for VOGAL
retorne UM se for CONSOANTE
*/

#include <iostream>
using namespace std;
char VogalCons(char letra);
char letra;
int result;

main()
{
	system("chcp 65001");
	cout<<"\n FUNÇÃO PARA LETRA VOGAL OU CONSOANTE \n\n";
	cout<<"\n\n Informe uma letra: ";
	cin>>letra;
	result=VogalCons(letra);
	letra=toupper(letra);
	if(result==0){
		cout<<"\n A letra "<<letra<<" é uma vogal";
	} 
	if (result==1){
		cout<<"\n A letra "<<letra<<" é uma consoante";
	}
	
	cout<<"\n\n\n";
}
//Area das funções
char VogalCons(char letra) {
	letra=toupper(letra);
    if (letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U') {
        return (0);
    } else {
        return (1);
    }
}
