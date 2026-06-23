using System;
using System.Globalization;

namespace menor_3
{
  class Program
  {
    static void Main(string[] args)
    {
      CultureInfo CI = CultureInfo.InvariantCulture;

      // declaracao das variaveis a serem utilizadas para a resolucao //
      int a, b, c, menor;

      // imput dos dados a serem utilizados para a resolucao //
      Console.Write("Primeiro valor: ");
      a = int.Parse(Console.ReadLine());
      Console.Write("Segundo valor: ");
      b = int.Parse(Console.ReadLine());
      Console.Write("Terceiro valor: ");
      c = int.Parse(Console.ReadLine());

      // logica para descobrir qual eh o menor valor entre os digitados pelo usuario //
      if (a < b && a < c) {
        menor = a;
      }
      else if (b < c) {
        menor = b;
      }
      else {
        menor = c;
      }

      //output do dado obtido apos a logica acima //
      Console.WriteLine("Menor = " + menor);
    }
  }
}
