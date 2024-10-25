#include<iostream> //entrada e saida de dados
#include <windows.h>
using namespace std;
int opcao;
char mFuncao[6];

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main() 
{
	
do{

  system("chcp 65001");
  system("cls");
  cout<<"\n\n Jogo de Palavra cruzada";
  cout<<"\n";
  cout<<"\n ======== Dicas ======== \n";
  cout<<"\n Dica 1: É como uma receita que define os passos necessários para preparar algo específico \n";
  cout<<"\n Dica 2: Um cenário ou condição específica que pode afetar o resultado de uma decisão \n";
  cout<<"\n Dica 3: Uma coleção organizada onde você encontra recursos prontos para usar \n";
  cout<<"\n Dica 4: Age como um tradutor \n";
  cout<<"\n Dica 5: É como uma caixinha que guarda valores que podem mudar ao longo do tempo \n";
  cout<<"\n===============================================";
  cout<<"\nEscolha uma opção:";
  cout<<"\n===============================================";
  cout<<"\n";
  cout<<"\n [1] - Começar";
  cout<<"\n [2] - Sair";
  cout<<"\n";
  
  
  cin>>opcao;
  
  switch (opcao)
  {
   case 1:{ 
   			do{
   				cout<<"\n \t Palavra cruzada!";
   				
				cout<<"\n ======== Dica ======== \n";
  				cout<<"\n Dica 1: É como uma receita que define os passos necessários para preparar algo específico \n";
   				
   				char funcao[7] = "funcao";
   				
   				
        		for (int j = 0; j < 6; ++j) { // Notas do aluno[i]
            		gotoxy(j * 10, 0); // Ajustando a posição de acordo com a linha e coluna
            		cin >> mFuncao[j]; // Pega as notas do aluno
        			}
    			} while (mFuncao[j] != "funcao");
			   }
   			
   			
            
			cout<<"\n\n\n";
        	system("pause");
            cout<<"\n\n\n";
   	        break;
          }
}//FECHA O SWITCH
} while (opcao != 2);

	cout<<"\n Tchau";
   cout<<"\n\n\n\n";  
}