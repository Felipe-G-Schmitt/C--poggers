/*
FUP para uma investigação criminal
*/

#include<iostream> //Inserir biblioteca para cin e cout
#include<string>
using namespace std; // Abreviar o cin e cout

int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7, resultado8, resultadoFinal;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	system ("color 2"); // usar a cor verde
	cout<<"\n Programa criminal";
	cout<<"\n Responda com S ou N";
    
    string(perg1);
    cout<<"\n Trocou mensagens com a vítima?";
    cin >> perg1;
    
    string(perg2);
    cout<<"\n Esteve no local do crime?";
    cin >> perg2;
    
    string(perg3);
    cout<<"\n É parente ou reside perto da vítima?";
    cin >> perg3;
    
    string(perg4);
    cout<<"\n Devia algum valor para a vítima?";
    cin >> perg4;
    
    string(perg5);
    cout<<"\n Trabalha ou trabalhou com a vítima?";
    cin >> perg5;
    
    string(perg6);
    cout<<"\n Possui algum tipo de relacionamento amoroso com a vítima?";
    cin >> perg6;
    
    string(perg7);
    cout<<"\n Ficou feliz pelo destino fatídico na vítima?";
    cin >> perg7;
    
    string(perg8);
    cout<<"\n Possui algum tipo de arma de fogo?";
    cin >> perg8;
    
    if (perg1 == "sim") {
    	resultado1=1;
	} else {
		resultado1=0;
	}
	if (perg2 == "sim") {
    	resultado2=1;
	} else {
		resultado2=0;
	}
	if (perg3 == "sim") {
    	resultado3=1;
	} else {
		resultado3=0;
	}
	if (perg4 == "sim") {
    	resultado4=1;
	} else {
		resultado4=0;
	}
	if (perg5 == "sim") {
    	resultado5=1;
	} else {
		resultado5=0;
	}
	if (perg6 == "sim") {
    	resultado6=1;
	} else {
		resultado6=0;
	}
	if (perg7 == "sim") {
    	resultado7=1;
	} else {
		resultado7=0;
	}
	if (perg8 == "sim") {
    	resultado8=1;
	} else {
		resultado8=0;
	}
	resultadoFinal = resultado1 + resultado2 + resultado3 + resultado4 + resultado5 + resultado6 + resultado7 + resultado8;
	if (resultadoFinal>=4){
		cout<<"\n Suspeito";
	} else {
		cout<<"\n Inocente";
	}
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa