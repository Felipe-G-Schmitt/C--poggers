#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

// Dimensões do grid
const int TAM_LINHAS = 10;
const int TAM_COLUNAS = 10;

// Função para verificar se uma palavra cabe na horizontal no grid
bool cabeHorizontal(const vector<vector<char>>& grid, const string& palavra, int linha, int coluna) {
  // Verifica se a palavra cabe dentro do grid na horizontal
  if (coluna + palavra.size() > TAM_COLUNAS) {
    return false;
  }

  // Verifica se há sobreposição com outras palavras
  for (int i = 0; i < palavra.size(); i++) {
    if (grid[linha][coluna + i] != '-' && grid[linha][coluna + i] != palavra[i]) {
      return false;
    }
  }

  return true;
}

// Função para verificar se uma palavra cabe na vertical no grid
bool cabeVertical(const vector<vector<char>>& grid, const string& palavra, int linha, int coluna) {
  // Verifica se a palavra cabe dentro do grid na vertical
  if (linha + palavra.size() > TAM_LINHAS) {
    return false;
  }

  // Verifica se há sobreposição com outras palavras
  for (int i = 0; i < palavra.size(); i++) {
    if (grid[linha + i][coluna] != '-' && grid[linha + i][coluna] != palavra[i]) {
      return false;
    }
  }

  return true;
}

// Função para inserir uma palavra no grid na horizontal
void inserirHorizontal(vector<vector<char>>& grid, const string& palavra, int linha, int coluna) {
  for (int i = 0; i < palavra.size(); i++) {
    grid[linha][coluna + i] = palavra[i];
  }
}

// Função para inserir uma palavra no grid na vertical
void inserirVertical(vector<vector<char>>& grid, const string& palavra, int linha, int coluna) {
  for (int i = 0; i < palavra.size(); i++) {
    grid[linha + i][coluna] = palavra[i];
  }
}

// Função para exibir o grid na tela
void exibirGrid(const vector<vector<char>>& grid) {
  for (int i = 0; i < TAM_LINHAS; i++) {
    for (int j = 0; j < TAM_COLUNAS; j++) {
      cout << grid[i][j] << " ";
    }
    cout << endl;
  }
}

// Função principal
int main() {
  // Leitura do dicionário de palavras
  vector<string> palavras;
  ifstream arquivo("dicionario.txt"); // Substitua "dicionario.txt" pelo nome do seu arquivo
  
  if (arquivo.is_open()) {
    string palavra;
    while (getline(arquivo, palavra)) {
      palavras.push_back(palavra);
    }
    arquivo.close();
  } else {
    cout << "Erro ao abrir o arquivo de dicionário!" << endl;
    return 1;
  }

  // Criação do grid vazio
  vector<vector<char>> grid(TAM_LINHAS, vector<char>(TAM_COLUNAS, '-'));

  // Inserção aleatória de palavras no grid
  srand(time(NULL));
  int palavrasInseridas = 0;
  while (palavrasInseridas < palavras.size()) {
    int palavraIndex = rand() % palavras.size();
    string palavra = palavras[palavraIndex];

    int linhaAleatoria = rand() % TAM_LINHAS;
    int colunaAleatoria = rand() % TAM_COLUNAS;

    // Tenta inserir a palavra na horizontal
    if (cabeHorizontal(grid, palavra, linhaAleatoria, colunaAleatoria)) {
      inserirHorizontal(grid, palavra, linhaAleatoria, colunaAleatoria);
      palavrasInseridas++;
      continue;
    }}}

    // Tenta inserir a palavra na vertical
    
