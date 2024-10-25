#include <iostream>
using namespace std;

float imc(float p, float a)
{
	int i;
	i=p/(a*a);
	return i;
}

int main(){
	
	float peso,altura;
	cout<<"Digite seu peso: ";
	cin>>peso;
	cout<<"Digite sua altura: ";
	cin>>altura;
	
	cout<<"O seu imc é "<< imc(peso,altura);
	
	return 0;
}