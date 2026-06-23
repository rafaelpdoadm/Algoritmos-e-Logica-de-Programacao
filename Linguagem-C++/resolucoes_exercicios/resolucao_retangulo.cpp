#include <bits/stdc++.h>

using namespace std;

int main () 
{
    // declaracao das variaveis para realizacao dos calculos //
    double base, altura, area, perimetro, diagonal;
    
    // input dos dados a serem coletados //
    cout << "Base do retangulo: ";
    cin >> base;

    cout << "Altura do triangulo: ";
    cin >> altura;
    
    // criacao dos calculos utilizando variaveis e os dados coletados acima // 
    area = base * altura;
    perimetro = 2* (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    // output dos dados coletados e calculados anteriormente //
    cout << fixed << setprecision(4);
    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << "Diagonal = " << diagonal << endl;
    
    return 0;
}