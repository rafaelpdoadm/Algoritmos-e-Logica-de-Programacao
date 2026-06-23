#include <bits/stdc++.h>

using namespace std;

int main () 
{
    // declaracao das variaveis a serem utilizadas na resolucao do exercicio //
    int a, b, c, menor;

    // input dos dados a serem utilizados no exercicio proposto //
    cout << "Primeiro valor: ";
    cin >> a;
    cout << "Segundo valor: ";
    cin >> b;
    cout << "Terceiro valor: ";
    cin >> c;

    // montagem da logica para encontrar o menor valor entre os tres solicitados acima //
    if (a < b && a < c) {
        menor = a;
    }
    else if (b < c) {
        menor = b;
    }
    else {
        menor = c;
    }

    // output do dado apos passar por logica para identificacao de qual e o menor //
    cout << "Menor = " << menor << endl;

    return 0;
}