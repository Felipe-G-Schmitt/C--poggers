//Felipe Gabriel E Felipe Vieira

#include<iostream> //entrada e saida de dados
#include <time.h>

using namespace std;
int opcao;

main() 
{
	
do{

  system("chcp 65001");
  system("cls");
  system("color F0");
  cout<<"\n\n Programa de geometria plana e espacial";
  cout<<"\n Programado por Felipe Gabriel e Felipe Vieira";
  cout<<"\n\n";
  cout<<"\n===============================================";
  cout<<"\nEscolha uma opção:";
  cout<<"\n===============================================";
  cout<<"\n";
  cout<<"\n [1] - Sorteie um poligono";
  cout<<"\n [2] - Sair";
  cout<<"\n Selecionado: ";
  
  cin>>opcao;
  
  switch (opcao)
  {
   case 1:{ 
   			int forma[12]={0,1,2,3,4,5,6,7,8,9,10,11};
   			int poliSort,i,j;
   			float compRetangulo,altRetangulo,compQuadrado,perimetroQuadrado,areaQuadrado,perimetroRetangulo,areaRetangulo,perimetroTriangulo,areaTriangulo,triLado1,triLado2,triBase,altTriangulo, perimetrotriret,areatriret,ladotriret,basetriret,hiptriret,teorema,areaIsoceles,perimetroIsoceles,ladoIsoceles,baseIsoceles,altIsoceles, altTrap,baseMaior,baseMenor,lado1,lado2,areaTrap,perimetroTrap, raioCilindro, alturaCilindro, volumeCilindro, saCilindro, raioCone, alturaCone, volumeCone, ladoCubo, volumeCubo, raioCirculo, AreaCirculo, CircunCirculo, baseParalelo, alturaParalelo, ladoParalelo, perimetParalelo, areaParalelo = 0;
   			srand(time(NULL));
  			poliSort= rand() % 12;
  			
  			if(poliSort==0){
  				cout<<"\n O poligono sorteado foi o retangulo!";
  				cout<<"\n  ____________";
  				cout<<"\n |            |";
  				cout<<"\n |____________|";
  				
  				cout<<"\nInforme os valores de um Retangulo em Cm:";
  				
				cout<<"\n\nComprimento: ";
				cin>>compRetangulo;
				
				cout<<"\nAltura: ";
				cin>>altRetangulo;
				
				perimetroRetangulo = ((2*compRetangulo)+(2*altRetangulo));
				areaRetangulo = (compRetangulo*altRetangulo);
				
				cout<<"\n Perimetro = "<<perimetroRetangulo<<" Cm.";
				cout<<"\n Área = "<<areaRetangulo<<" Cm².";
  				
			  }//0
			if(poliSort==1){
  				cout<<"\n O poligono sorteado foi o quadrado! \n";
  				cout << "\n  +------+";
				cout << "\n  |      |";
				cout << "\n  |      |";
				cout << "\n  +------+";
				
				cout<<"\nInforme o valor de um Quadrado em Cm:";
				
				cout<<"\n\n Comprimento: ";
				cin>>compQuadrado;
				
				perimetroQuadrado = (4*compQuadrado);
				areaQuadrado = (compQuadrado*compQuadrado);
				
				cout<<"\n Perimetro = "<<perimetroQuadrado<<" Cm.";
				cout<<"\n Área = "<<areaQuadrado<<" Cm².";
			  }//1
			if(poliSort==2){
  				cout<<"\n O poligono sorteado foi o triangulo!";
  				cout<<"\n         ∕|\\";
				cout<<"\n       ∕  | \\";
				cout<<"\n     ∕    |  \\";
				cout<<"\n   ∕      |   \\";
				cout<<"\n ∕________|____\\";
				
				cout<<"\nInforme os valores de um Triangulo em Cm:";
				
				cout<<"\n\nLado 1: ";
				cin>>triLado1;
				
				cout<<"\nBase: ";
				cin>>triBase;
				
				cout<<"\nLado 2: ";
				cin>>triLado2;
				
				cout<<"\nAltura: ";
				cin>>altTriangulo;
				
				perimetroTriangulo = (triLado1+triLado2+triBase);
				areaTriangulo = ((triLado2/2)*(triBase*altTriangulo));
				
				cout<<"\n Perimetro= "<<perimetroTriangulo<<" Cm.";
				cout<<"\n Área= "<<areaTriangulo<<" Cm.";
				
			  }//2
			if(poliSort==3){
  				cout<<"\n O poligono sorteado foi o triangulo retangulo! \n";
  				for(i=1;i<=5;i++){ 
					for(j=1;j<=i;j++){ 
						cout<<" *"; 
					}
					cout<<"\n"; 
				}
				
				cout<<"\n Informe os valores de um Triangulo Retangulo em Cm:";
				
				cout<<"\n Base: ";
				cin>>basetriret;
				
				cout<<"\n Lado: ";
				cin>>ladotriret;
				
				cout<<"\n Hipotenusa: ";
				cin>>hiptriret;
	
				perimetrotriret = (basetriret+ladotriret+hiptriret);
				areatriret = ((basetriret*ladotriret)/2);
	
				cout<<"\n Perimetro = "<<perimetrotriret<<" Cm.";
				cout<<"\n Área = "<<areatriret<<" Cm.";
	
			  }//3
			if(poliSort==4){
  				cout<<"\n O poligono sorteado foi o triangulo retangulo(teorema de pitagoras)! \n";
  				for(i=1;i<=5;i++){ 
					for(j=1;j<=i;j++){ 
						cout<<" *"; 
					}
					cout<<"\n"; 
				}
				
				cout<<"\n Informe os valores de um Triangulo para o Teorema de Pitagoras";
				
				cout<<"\n Base: ";
				cin>>basetriret;
				
				cout<<"\n Lado: ";
				cin>>ladotriret;
	
				teorema = ((basetriret*basetriret)+(ladotriret*ladotriret));
	
				cout<<"\n Hipotenusa²= "<<teorema<<" Cm.";
			  }//4
			if(poliSort==5){
  				cout<<"\n O poligono sorteado foi o triangulo isosceles! \n";
  				for(i=1;i<=5;i++){ 
					for(j=i;j<=5;j++){ 
						cout<<" "; 
					}
					for(j=1;j<=i;j++){ 
						cout<<" *"; 
					}
					cout<<"\n"; 
					}
					
				cout<<"\nInforme os valores de um Triangulo Isoceles em Cm:";
				
				cout<<"\n Lado: ";
				cin>>ladoIsoceles;
				
				cout<<"\n Base: ";
				cin>>baseIsoceles;
				
				cout<<"\n Altura: ";
				cin>>altIsoceles;
	
				perimetroIsoceles = ((ladoIsoceles*2)+baseIsoceles);
				areaIsoceles = ((baseIsoceles*altIsoceles)/2);
	
				cout<<"\n Perimetro= "<<perimetroIsoceles<<" Cm.";
				cout<<"\n Área= "<<areaIsoceles<<" Cm.";
	
			  }//5
			if(poliSort==6){
  				cout<<"\n O poligono sorteado foi o Trapezio!";
  				cout<<"\n    ______________";
  				cout<<"\n   /              \\";
  				cout<<"\n  /                \\";
  				cout<<"\n /__________________\\";
  				
  				cout<<"\n Informe os valores de um Trapezio em Cm:";
  				
				cout<<"\n Base maior: ";
				cin>>baseMaior;
				
				cout<<"\n Base menor: ";
				cin>>baseMenor;
				
				cout<<"\n Lado 1: ";
				cin>>lado1;
				
				cout<<"\n Lado 2: ";
				cin>>lado2;
				
				cout<<"\n Altura: ";
				cin>>altTrap;
	
				perimetroTrap = (baseMaior+baseMenor+lado1+lado2);
				areaTrap = ((lado2/2)*altTrap*(baseMaior+baseMenor));
	
				cout<<"\n Perimetro= "<<perimetroTrap<<" Cm.";
				cout<<"\n Área= "<<areaTrap<<" Cm.";
	
			  }//6
			if(poliSort==7){
  				cout<<"\n O poligono sorteado foi o Paralelogramo!";
  				cout<<"\n    _______________";
  				cout<<"\n   /|              /";
  				cout<<"\n  / |             /";
  				cout<<"\n /__|____________/";
  				
  				cout<<"\n Informe os valores de um paralelogramo em Cm:";
				
				cout<<"\n\n Base: ";
				cin>>baseParalelo;
				
				cout<<"\n\n Altura: ";
				cin>>alturaParalelo;
				
				cout<<"\n\n Lado: ";
				cin>>ladoParalelo;
				
				perimetParalelo=2*ladoParalelo+2*baseParalelo;
				areaParalelo=baseParalelo*alturaParalelo;
				
				cout<<"\n Perímetro = "<<perimetParalelo<<" Cm³.";
				cout<<"\n Área = "<<areaParalelo<<" Cm².";
				
			  }//7
			if(poliSort==8){
  				cout<<"\n O poligono sorteado foi o circulo!";
				cout << "\n                **************";
    			cout << "\n            **********************";
    			cout << "\n         ****************************";
    			cout << "\n      ***********            ***********";
    			cout << "\n     ********                    ********";
    			cout << "\n   ********                        ********";
    			cout << "\n  *******                            *******";
    			cout << "\n *******                              *******";
    			cout << "\n ******                                ******";
    			cout << "\n******                                  ******";
    			cout << "\n******                                  ******";
    			cout << "\n******                                  ******";
    			cout << "\n******                                  ******";
    			cout << "\n******                                  ******";
    			cout << "\n******                                  ******";
    			cout << "\n ******                                ******";
    			cout << "\n  *******                              *******";
    			cout << "\n   ********                          ********";
    			cout << "\n     ********                    ********";
    			cout << "\n      ***********            ***********";
    			cout << "\n         ****************************";
    			cout << "\n            **********************";
    			cout << "\n                **************\n";
    			
    			cout<<"\n Informe os valores de um Circulo em Cm:";
				
				cout<<"\n\n Raio: ";
				cin>>raioCirculo;
				
				CircunCirculo=6.28*raioCirculo;
				AreaCirculo=3.14*(raioCirculo*raioCirculo);
				
				cout<<"\n Circunferência = "<<CircunCirculo<<" Cm³.";
				cout<<"\n Área = "<<AreaCirculo<<" Cm².";
			  }//8
			if(poliSort==9){
  				cout<<"\n O poligono sorteado foi o cubo!";
  				cout << "\n     +------+";
				cout << "\n    /      /|";
				cout << "\n   /      / |";
				cout << "\n  +------+  +";
				cout << "\n  |      | /";
				cout << "\n  |      |/ ";
				cout << "\n  +------+";
				
				cout<<"\n Informe o valor de um Cubo em Cm:";
				
				cout<<"\n\n Lado: ";
				cin>>ladoCubo;
				
				volumeCubo=ladoCubo*ladoCubo*ladoCubo;
				
				cout<<"\n Volume = "<<volumeCubo<<" Cm³."; 
			  }//9
			if(poliSort==10){
				cout<<"\n O poligono sorteado foi o cone!";
				cout << "\n       / \\";
				cout << "\n      /   \\";
				cout << "\n     /     \\";
				cout << "\n    /       \\";
				cout << "\n   /_________\\";
				cout << "\n  /           \\";
				cout << "\n  \\___________/";
				
				cout<<"\n Informe os valores de um Cone em Cm:";
				
				cout<<"\n\n Raio: ";
				cin>>raioCone;
				
				cout<<"\n\n Altura: ";
				cin>>alturaCone;
				
				volumeCone=0.333*3.14*(raioCone*raioCone)*alturaCone;
				
				cout<<"\n Volume = "<<volumeCone<<" Cm³.";
			  }//10
			if(poliSort==11){
				cout<<"\n O poligono sorteado foi o cilindro circular reto!";
			    cout << "\n  __________";
				cout << "\n /          \\";
				cout << "\n |\\________/|";
				cout << "\n |          |";
				cout << "\n |          |";
				cout << "\n |          |";
				cout << "\n |          |";
				cout << "\n \\__________/";
				
				cout<<"\n Informe os valores de um Cilindro circular reto em Cm:";
				
				cout<<"\n\n Raio: ";
				cin>>raioCilindro;
				
				cout<<"\n\n Altura: ";
				cin>>alturaCilindro;
				
				volumeCilindro=3.14*(raioCilindro*raioCilindro)*alturaCilindro;
				saCilindro=6.28*(raioCilindro*raioCilindro)+(6.28*raioCilindro*alturaCilindro);
				
				cout<<"\n Volume = "<<volumeCilindro<<" Cm³.";
				cout<<"\n Área da superfice = "<<saCilindro<<" Cm².";
				
			  }//11
			cout<<"\n\n\n";
        	system("pause");
            cout<<"\n\n\n";
   	        break;
          }
}//FECHA O SWITCH
} while (opcao != 2);

	cout<<"\n Tchau";
   cout<<"\n\n";  
}