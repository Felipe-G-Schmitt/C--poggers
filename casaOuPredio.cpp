/*
FUP que desenhe na tela uma casinha.
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

int num;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa que desenha uma casa ou um prédio";
	cout<<"\n Digite o número 1 para casa e 2 para prédio: ";
	
    cin >> num;
    
    if (num == 1) {
    	cout<<"    *Casa* \n";
    	cout<<"      ^  \n";
    	cout<<"     / \\ "<<"\n";
    	cout<<"    /   \\ "<<"\n";
    	cout<<"   /     \\ "<<"\n";
    	cout<<"  /       \\ "<<"\n";
    	cout<<" / _______ \\ "<<"\n";
    	cout<<"  |   _   | \n";
    	cout<<"  |  | |  | \n";
    	cout<<"  |__| |__| \n";
	} else if (num == 2){
		cout<<"  *Prédio* \n";
		cout<<"   _______"<<"\n";
		cout<<"___|_____|___"<<"\n";
		cout<<"|            |"<<"\n";
		cout<<"|  |_____|   |"<<"\n";
		cout<<"|            |"<<"\n";
		cout<<"|  |_____|   |"<<"\n";
		cout<<"|            |"<<"\n";
		cout<<"|  |_____|   |"<<"\n";
		cout<<"|            |"<<"\n";
		cout<<"|  |_____|   |"<<"\n";
		cout<<"|            |"<<"\n";
		cout<<"|  |_____|   |"<<"\n";
		cout<<"|  _______   |"<<"\n";
		cout<<"|__|__|__|___|"<<"\n";
	} else {
		cout<<">:(";
	}
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa