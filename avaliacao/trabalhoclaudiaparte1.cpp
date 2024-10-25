#include<iostream>

int i;
float compRetangulo,altRetangulo,compQuadrado,perimetroQuadrado,areaQuadrado,perimetroRetangulo,areaRetangulo,perimetroTriangulo,areaTriangulo,triLado1,triLado2,triBase,altTriangulo,triret1,triret2,triret3,triretArea,triretPerimetro;
float perimetrotriret,areatriret,ladotriret,basetriret,hiptriret,teorema,areaIsoceles,perimetroIsoceles,ladoIsoceles,baseIsoceles,altIsoceles,
altTrap,baseMaior,baseMenor,lado1,lado2,areaTrap,perimetroTrap; //float dos que nao estao no projeto

main(){
	using namespace std;
	system("chcp 65001");
	
	// CALCULO RETANGULO 
	
	/*
	cout<<"\nInforme os valores de um Retangulo em Cm:";
	cout<<"\n\nComprimento: ";
	cin>>compRetangulo;
	cout<<"\nAltura: ";
	cin>>altRetangulo;
	
	perimetroRetangulo = ((2*compRetangulo)+(2*altRetangulo));
	areaRetangulo = (compRetangulo*altRetangulo);
	
	cout<<"\n\nPerimetro= "<<perimetroRetangulo<<" Cm.";
	cout<<"\nÁrea= "<<areaRetangulo<<" Cm.";
	
	// CALCULO QUADRADO
	
	cout<<"\nInforme o valor de um Quadrado em Cm:";
	cout<<"\n\nComprimento: ";
	cin>>compQuadrado;
	
	perimetroQuadrado = (4*compQuadrado);
	areaQuadrado = (compQuadrado*compQuadrado);
	
	cout<<"\n\nPerimetro= "<<perimetroQuadrado<<" Cm.";
	cout<<"\nÁrea= "<<areaQuadrado<<" Cm.";
	
	// CALCULO TRIANGULO
	
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
	areaTriangulo = ((triBase*altTriangulo)/2);
	
	cout<<"\n\nPerimetro= "<<perimetroTriangulo<<" Cm.";
	cout<<"\nÁrea= "<<areaTriangulo<<" Cm.";  
	
	*/
	
	// CALCULO TRIANGULO RETANGULO
	
	cout<<"\nInforme os valores de um Triangulo Retangulo em Cm:";
	cout<<"\n\nBase: ";
	cin>>basetriret;
	cout<<"\nLado: ";
	cin>>ladotriret;
	cout<<"\nHipotenusa: ";
	cin>>hiptriret;
	
	perimetrotriret = (basetriret+ladotriret+hiptriret);
	areatriret = ((basetriret*ladotriret)/2);
	
	cout<<"\n\nPerimetro= "<<perimetrotriret<<" Cm.";
	cout<<"\nÁrea= "<<areatriret<<" Cm.";
	
	// CALCULO TEOREMA DE PITAGORAS
	
	cout<<"\n\nInforme os valores de um Triangulo para o Teorema de Pitagoras";
		cout<<"\n\nBase: ";
	cin>>basetriret;
	cout<<"\nLado: ";
	cin>>ladotriret;
	
	teorema = ((basetriret*basetriret)+(ladotriret*ladotriret));
	
	cout<<"\n\nHipotenusa²= "<<teorema<<" Cm.";
	
	// CALCULO DE UM TRIANGULO ISOCELES
	
	cout<<"\nInforme os valores de um Triangulo Isoceles em Cm:";
	cout<<"\n\nLado: ";
	cin>>ladoIsoceles;
	cout<<"\nBase: ";
	cin>>baseIsoceles;
	cout<<"\nAltura: ";
	cin>>altIsoceles;
	
	perimetroIsoceles = ((ladoIsoceles*2)+baseIsoceles);
	areaIsoceles = ((baseIsoceles*altIsoceles)/2);
	
	cout<<"\n\nPerimetro= "<<perimetroIsoceles<<" Cm.";
	cout<<"\nÁrea= "<<areaIsoceles<<" Cm.";

	//TRAPEZIO
	
	cout<<"\nInforme os valores de um Trapezio em Cm:";
	cout<<"\n\nBase maior: ";
	cin>>baseMaior;
	cout<<"\nBase menor: ";
	cin>>baseMenor;
	cout<<"\nLado 1: ";
	cin>>lado1;
	cout<<"\nLado 2: ";
	cin>>lado2;
	cout<<"\nAltura: ";
	cin>>altTrap;
	
	perimetroTrap = (baseMaior+baseMenor+lado1+lado2);
	areaTrap = ((lado2/2)*altTrap*(baseMaior+baseMenor));
	
	cout<<"\n\nPerimetro= "<<perimetroTrap<<" Cm.";
	cout<<"\nÁrea= "<<areaTrap<<" Cm.";

	
	
}