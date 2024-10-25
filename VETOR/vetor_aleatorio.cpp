//Verifica se o Número é Par ou Ímpar
#include <iostream>//INCLUI A BIBLIOTECA
#include <time.h>
using namespace std;
int vetor [1000];//declarar variável
const int TAM = 1000;
main()
{
    srand(time(NULL));
	system("chcp 65001 ");
	cout<<"\n\t PROGRAMA VETOR ALEATÓRIO ";
    for (int i=0;i<=TAM;i++)
	{ 
	   vetor[i]=rand()%1000;
	}
	cout<<"\n\n IMPRIMINDO O VETOR \n\n ";
    for (int i=0;i<=TAM;i++)
	{ 
	   cout<<"  "<< vetor[i];
	}
    
	cout<<"\n\n\n\n\n"; 
}
