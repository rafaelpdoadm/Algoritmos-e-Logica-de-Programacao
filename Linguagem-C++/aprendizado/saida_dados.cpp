#include <bits/stdc++.h>

using namespace std;

int main ()
{
  // sem quebra de linha //
  cout << "Bom dia";
  // com quebra de linha
  cout << "Bom dia" << endl;
  // outra opcao e fazer como na linguagem C //
  cout << "Bom dia\n";

  // output de dados //
  int x, y;
  x = 10;
  y = 20;
  cout << x << endl;
  cout << y << endl;

  // controle de numeros nao inteiros //
  double z;
  z = 2.3456;
  cout << fixed << setprecision(2);
  cout << z << endl;

  // impressao de frase com valores definidos em variaveis //
  int idade;
  double salario;
  string nome;
  char sexo;

  idade = 32;
  salario = 4560.9;
  nome = "Maria Silva";
  sexo = 'F';

  cout << fixed << setprecision (2);
  cout << "A funcionaria " << nome << ", sexo " << sexo << ", ganha " << salario << " e tem " << idade << " anos" << endl;
  
  return 0;
}
