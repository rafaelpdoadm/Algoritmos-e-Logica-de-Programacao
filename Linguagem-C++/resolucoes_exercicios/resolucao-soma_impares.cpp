#include <bits/stdc++.h>

using namespace std;

int main ()
{
  // declaracao das variaveis a serem utilizadas na solucao //
  int x, y, troca, soma;

  // input para coletar os dados e iniciar a resolucao da situacao problema //
  cout << "Digite dois numeros:" << endl;
  cin >> x >> y;

  // como no enunciado eh dito que os numeros podem ser digitados em qualquer ordem, montei uma estrutura if para o x ser maior que y sempre //
  if (x > y) {
    troca = x;
    x = y;
    y = troca;
  }

  // criacao da regra for para percorrer todos os valores entre x e y//
  soma = 0;
  for (int i = x+1; i < y; i++) {
    if (i % 2 != 0) {
      soma = soma +i;
    }
  }

  // output dos dados impares somados //
  cout << "Soma dos impares = " << soma << endl;

  return 0;
}