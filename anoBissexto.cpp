/*
FUP que peça um ano e verifique se esse ano informado é bissexto
*/

#include<iostream> //Inserir biblioteca para cin e cout
using namespace std; // Abreviar o cin e cout

float raioCirculo, AreaCirculo, CircunCirculo;
float compRetangulo,altRetangulo,compQuadrado,perimetroQuadrado,areaQuadrado,perimetroRetangulo,areaRetangulo,perimetroTriangulo,areaTriangulo,triLado1,triLado2,triBase,altTriangulo, perimetrotriret,areatriret,ladotriret,basetriret,hiptriret,teorema,areaIsoceles,perimetroIsoceles,ladoIsoceles,baseIsoceles,altIsoceles, altTrap,baseMaior,baseMenor,lado1,lado2,areaTrap,perimetroTrap;

main()
{
	system("chcp 65001"); //para ficar em pt-br
	cout<<"\n Programa de ano bissexto \n";
	cout<<"\n Informe os valores de um Circulo em Cm:";
				
				cout<<"\nInforme os valores de um Triangulo Retangulo em Cm:";
				
				cout<<"\n Base: ";
				cin>>basetriret;
				
				cout<<"\n Lado: ";
				cin>>ladotriret;
				
				cout<<"\n Hipotenusa: ";
				cin>>hiptriret;
	
				perimetrotriret = (basetriret+ladotriret+hiptriret);
				areatriret = ((basetriret*ladotriret)/2);
	
				cout<<"\n\n Perimetro = "<<perimetrotriret<<" Cm.";
				cout<<"\n Área = "<<areatriret<<" Cm.";
	
    
    
	
	cout<<"\n\n\n"; //"\n" é para pular a linha
} // Final do Programa