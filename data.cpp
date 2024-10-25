/* FUP que leia a data:
dia mes ano
e não permita datas invalidas
*/
#include<iostream>

int i,dia,mes,ano;

main()
{
	  using namespace std;
	  system("chcp 65001");
      cout<<"\n Progama de datas";
      cout<<"\n Informe um dia: ";
      cin>>dia;
      if((dia>30)||(dia<0)){
      	do{
      		cout<<"\n Informe um dia: ";
      		cin>>dia;
		  } while((dia>30)||(dia<0));
	  } 
      cout<<"\n Informe um mes: ";
      cin>>mes;
      
      if((mes>12)||(mes<0)){
      	do{
      		cout<<"\n Informe um mes: ";
      		cin>>mes;
      	} while((mes>12)||(mes<0));
      }
      	
      	cout<<"\n Informe um ano: ";
      	cin>>ano;
      	
      if((ano>2024)||(ano<0)){
      	do{
      		cout<<"\n Informe um ano: ";
      		cin>>ano;
      	} while((ano>2024)||(ano<0));
      }
      		
      cout<<"Essa data existe 👍";
        
	cout<<"\n\n\n\n ";	  
}