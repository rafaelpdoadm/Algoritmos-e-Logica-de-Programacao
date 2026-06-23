#include <bits/stdc++.h>

using namespace std;

int main ()
{
   // declaracao das variaveis a serem utilizadas na situacao problema // 
   int x, y;
   
   // input dos dados para inicio da resolucao da situacao proposta //
   cout << "Digite dois numeros:" << endl;
   cin >> x;
   cin >> y;

   // criacao da regra enquanto para identificacao da ordem crescente ou decrescente que pode ser identificada a partir dos numeros //
   while (x != y) {
    if (x < y) {
        cout << "Crescente!" << endl;
    }
    else {
        cout << "Decrescente!" << endl;
    }
    cout << "Digite outros dois numeros:" << endl;
    cin >> x >> y;
   }
}