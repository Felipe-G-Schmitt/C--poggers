//Demonstração do uso do Switch

#include<iostream> //entrada e saida de dados
using namespace std;
int i,opcao, j;

main() 
{
	
do{

  system("chcp 65001");
  system("cls");
  cout<<"\n\n Programa de desenho com SWITCH";
  cout<<"\n\n\n\n";
  cout<<"\n===============================================";
  cout<<"\nEscolha uma opção:";
  cout<<"\n===============================================";
  cout<<"\n";
  cout<<"\n [1] - Visualizar um quadrado";
  cout<<"\n [2] - Visualizar um retangulo";
  cout<<"\n [3] - Visualizar um desenho de um gatinho";
  cout<<"\n [4] - Visualizar uma piramide";
  cout<<"\n [5] - Visualizar um tabuleiro de Xadrez";
  cout<<"\n [6] - Fim";
  
  cin>>opcao;
  
  switch (opcao)
  {
   case 1:{ 
   			cout<<"\n\n";
   			for (i=0; i<=5;i++) {
   				cout<<"*********";
   				cout<<"\n";
			   }
              
        	system("pause");
            cout<<"\n\n\n";
   	        break;
          }
   case 2:{
   			cout<<"\n\n";
   			for (i=0; i<=3;i++) {
   				cout<<"*************************";
   				cout<<"\n";
			   }
              
        	system("pause");
            cout<<"\n\n\n";
   	        break;
         }
   case 3:{ cout<<"           __..--''``---....___   _..._    __"<<"\n";
   			cout<<" /// //_.-'    .-/\\                      __/"<<"\n";
   			cout<<"///_.-' _..--.'_    \                    `( ) ) // //"<<"\n";
   			cout<<"/ (_..-' // (< _     ;_..__               ; `' / ///"<<"\n";
   			cout<<" / // // //  `-._,_)' // / ``--...____..-' /// / //"<<"\n";
            system("pause");
            cout<<"\n\n";
   	        break;
         }
   case 4:{
   			for(i=1;i<=5;i++){ 
				for(j=i;j<=5;j++){ 
					cout<<" "; 
				}
				for(j=1;j<=i;j++){ 
					cout<<" *"; 
				}
					cout<<"\n"; 
				}
   			system("pause");
            cout<<"\n\n";
   	     	break;
          }
    case 5:{
    		for(i=1;i<=8;i++){
    			for(int k=5;k<=6;k++){
    				cout<<"□■□■□■□■";
				}
				cout<<"\n";
			}
   			
   			system("pause");
            cout<<"\n\n";
   	     	break;
          }
   default: {cout<<"\n Escolha certo da Próxima Vez";
   				system("pause");
            	cout<<"\n\n";
   	        	break;
            }
}//FECHA O SWITCH
} while (opcao != 6);

	cout<<"\n Tchau";
   cout<<"\n\n\n\n";  
}