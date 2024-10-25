#include <iostream>
#include <windows.h>
using namespace std;

// Função para posicionar o cursor na tela
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    // Declarando a matriz
    float matriz[10][4];
    // Declarando um vetor para armazenar as médias
    float medias[10];
    
    // Pedindo ao usuário que insira as notas
    cout << "Insira as notas da matriz 10x4:" << endl;
    for (int i = 0; i < 10; ++i) { //Aluno
        float soma = 0; //Inicializa a variavel soma
        for (int j = 0; j < 4; ++j) { // Notas do aluno[i]
            gotoxy(j * 10, i + 2); // Ajustando a posição de acordo com a linha e coluna
            cin >> matriz[i][j]; // Pega as notas do aluno
            soma += matriz[i][j]; // Cada nota adiciona na soma para fazer a média
        }
        medias[i] = soma / 4; // Calculando a média para o aluno [i]
    }
    
    // Imprimindo a matriz
    gotoxy(0, 15); // Movendo o cursor para uma posição abaixo da matriz
    cout << "\nMatriz:" << endl;
    for (int i = 0; i < 10; ++i) { // Aluno
        for (int j = 0; j < 4; ++j) { // Nota
            cout << matriz[i][j] << "\t"; // Imprime as notas (4 notas para 10 alunos)
        }
        cout << endl;
    }

    // Imprimindo as médias
    gotoxy(0, 27); // Movendo o cursor para uma posição abaixo da matriz
    cout << "\n Médias:" << endl; 
    for (int i = 0; i < 10; ++i) { 
        cout << "Aluno " << i + 1 << ": " << medias[i] << endl; // Imprime a média de acordo com o index da medias[i]
    }

    return 0;
}
