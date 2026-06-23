#include <bits/stdc++.h>

using namespace std;

int main ()
{
  // declaracao das variaveis a serem utilizadas na resolucao //
  int n, cont;
  double soma, media, percent;

  // input dos dados para a resolucao do problema //
  cout << "Quantas pessoas serao digitadas? ";
  cin >> n;

  // criacao dos vetores nomes, idades e alturas //
  string nomes[n];
  int idades[n];
  double alturas[n];

  // logica para leitura dos dados //
  for (int i = 0; i < n; i++) {
    cout << "Dados da " << i+1 <<"a pessoa:" << endl;
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nomes[i]);
    cout << "Idade: ";
    cin >> idades[i];
    cout << "Altura: ";
    cin >> alturas[i];
  }

  // criacao do laco for para calculo da soma e da media das alturas //
  soma = 0;
  for (int i = 0; i < n; i++) {
    soma = soma + alturas[i];
  }
  media = soma / n ;

  // criacao da regra for para calculo da soma, media e com seus resultados calcular a porcentagem de pessoas com menos de 16 anos //
  cout << fixed << setprecision(2);
  cout << "Altura media: " << media << endl;
  
  cont = 0;
  for (int i = 0; i < n; i++) {
    if (idades[i] < 16) {
      cont++;
    }
  }
  percent = (double) cont * 100 / n;

  // output dos dados coletados e transformados anteriormente //
  cout << fixed << setprecision(2);
  cout << "Pessoas com menos de 16 anos: "<< percent << "%" << endl;

  for (int i = 0; i < n; i++) {
    if (idades[i] < 16) {
      cout << nomes[i] << endl;
    }
  }
  
  return 0;
}