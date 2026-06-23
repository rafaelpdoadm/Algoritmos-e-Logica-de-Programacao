using System;
using System.Globalization;

namespace soma_impares
{
  class Program
  {
    static void Main(string[] args)
    {
      // declaracao das variaveis a serem utilizadas //
      int x, y, troca, soma;

      // imput dos dados para a resolucao do exercicio //
      Console.WriteLine("Digite dois numeros:");
      x = int.Parse(Console.ReadLine());
      y = int.Parse(Console.ReadLine());

      // criacao da logica para a soma dos numeros impares //
      if (x > y) {
        troca = x;
        x = y;
        y = troca;
      }

      soma = 0;
      for (int i = x+1; i < y; i++) {
        if (i % 2 != 0) {
          soma = soma + i;
        }
      }
      // output dos dados calculados acima //
      Console.WriteLine("Soma dos impares = " + soma);
    }
  }
}
