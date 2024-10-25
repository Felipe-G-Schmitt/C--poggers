#include <iostream>
using namespace std;

int main() {
    // Declarando e inicializando as matrizes
    float matriz1[3][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };
    
    float matriz2[3][3] = {
        {2, 2, 2},
        {1, 1, 1},
        {2, 2, 2}
    };

    // Imprimindo a matriz 1
    cout << "Matriz 1:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz1[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout<<"\n +++ \n";
    
    // Imprimindo a matriz 2
    cout << "\nMatriz 2:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz2[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout<<"\n === \n";
    cout << "Matriz somada:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz1[i][j]+matriz2[i][j] << "\t";
        }
        cout << endl;
    }
    
}
