#include <iostream>
using namespace std;
void imprimeLinha();

main()
{
	system("chcp 65001");
	cout<<"\n IMPRIMINDO LINHAS";
	for(int i=1;i<=10;i++){
		imprimeLinha();
	}
	cout<<"\n\n\n";
}
//Area das funções
void imprimeLinha(){
	cout<<"\n =============================";
}