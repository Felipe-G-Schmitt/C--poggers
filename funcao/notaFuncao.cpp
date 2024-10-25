#include <iostream>
using namespace std;
float calcularMedia(float nota1, float nota2, float nota3);
float nota1, nota2, nota3, resultado;

main()
{
	system("chcp 65001");
	cout<<"\n PROGRAMA MEDIA DE NOTAS \n\n";
	cout<<"\n\n Informe a primeira nota: ";
	cin>>nota1;
	cout<<"\n\n Informe a segunda nota: ";
	cin>>nota2;
	cout<<"\n\n Informe a terceira nota: ";
	cin>>nota3;
	resultado=calcularMedia(nota1,nota2,nota3);
	cout<<"\n A média é: "<<resultado;
	cout<<"\n\n\n";
}
//Area das funções
float calcularMedia(float nota1, float nota2, float nota3){
	float media;
	media = (nota1+nota2+nota3)/3;
	return(media);
}