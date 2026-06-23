using System;
using Syste.Globalization;

namespace resolucao_crescente
{
  class Program
  {
    static void Min(string[] args)
    {
      // declaracao das variaveis a serem utilizadas para a resolucao //
      int x, y;

      // input para coleta dos dados a serem utilizados na resolucao //
      Console.WriteLine("Digite dois numeros:");
      x = int.Parse(Console.ReadLine());
      y = int.Parse(Console.ReadLine());

      // montagem da logica para identificacao da ordem crescente ou decrescente dos numeros digitados //
      while (x != y) {
        if (x < y) {
          Console.WriteLine("Crescente!");
        }
        else {
          Console.WriteLine("Decrescente!");
        }
      Console.WriteLine("Digite dois numeros:");
      x = int.Parse(Console.ReadLine());
      y = int.Parse(Console.ReadLine());
      }
    }
  }
}
