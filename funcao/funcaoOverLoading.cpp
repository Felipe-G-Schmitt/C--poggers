#include <iostream>
using namespace std;
void display();
void display(int num1,int num2);

main()
{
	int num1,num2;
	
	system("chcp 65001");
	cout<<"\n Exemplo de função overloading";
	display();
	display(5,10);
	cout<<"\n\n\n";
}
//Area das funções
void display(){
	cout<<"\n\n\n Oi";
}
void display(int num1, int num2){
	cout<<"\n\n A soma é: "<<num1+num2;
}