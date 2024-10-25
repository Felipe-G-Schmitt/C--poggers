//Biblioteca: C++

//Função Par ou Impar
int parImpar(int num){
	if (num%2==0) {
    	return(0);
	} else {
    	return(1);
	}
}
//================================
//Função multiplicação de tres numeros
int multi(int num1, int num2, int num3) {
	return(num1*num2*num3);
}
//================================
//Função subtração de tres numeros
int subt(int num1, int num2, int num3) {
	return(num1-num2-num3);
}
//================================
//Função para números positivos e negativos
int posNeg(int num){
	if (num>=0) {
    	return(1);
	} 
	else {
    	return(0);
	}
}
//================================
//Função para vogais e consoantes
char VogalCons(char letra) {
	letra=toupper(letra);
    if (letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U') {
        return (0);
    } else {
        return (1);
    }
}