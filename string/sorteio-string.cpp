#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;
main(){
	system("chcp 65001");
	srand(time(NULL));
	vector<string> palavras {"maçã", "banana", "laranja", "abacaxi", "uva"};
	int indice_aleatorio = rand() % palavras.size();
	string palavra_sorteada = palavras[indice_aleatorio];
	cout<<"Uma daspalavras sorteadas é: "<<palavra_sorteada<<endl;
}