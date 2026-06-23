#include <bits/stdc++.h>

using namespace std;

int main () 
{
  // declaracao das variaveis a serem utilizadas na resolucao //
  int n, cont;

  // input dos dados necessarios para a construcao da matriz //
  cout << "Qual a ordem da matriz? ";
  cin >> n;

  // criacao da matriz de acordo com o tamanho n //
  int mat[n][n];

  // criacao de regra for para percorrer toda a matriz //
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "Elemento [" << i << "," << j << "]: ";
      cin >> mat[i][j];
    }
  }
  
  // logica para imprimir a diagonal principal da matriz //
  cout << "Diagonal principal: " << endl;
  for (int i = 0; i < n; i++) {
    cout << mat[i][i] << " ";
  }

  cout << endl;

  // regra para buscar os numeros negativos da matriz //
  cont = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (mat[i][j] < 0) {
        cont++;
      }
    }
  }
  cout << "Quantidade de negativos = " << cont << endl;
  
  return 0;
}