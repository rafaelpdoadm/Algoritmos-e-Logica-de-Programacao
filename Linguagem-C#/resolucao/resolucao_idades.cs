using System;
using System.Globalization;

namespace resolucao_idades
{
  class Program
  {
    static void Main(string[] args)
    {
      CultureInfo CI = CultureInfo.InvariantCulture;

      // declaracao das variaveis a serem utilizadas na resolucao //
      string nome1, nome2;
      int idade1, idade2;
      double media;

      // imput e organizacao da logica a ser utilizada para a resolucao //
      Console.WriteLine("Dados da primeira pessoa:");
      Console.Write("Nome: ");
      nome1 = Console.ReadLine();
      Console.Write("Idade: ");
      idade1 - int.Parse(Console.ReadLine());
      
      Console.WriteLine("Dados da segunda pessoa:");
      Console.Write("Nome: ");
      nome2 = Console.ReadLine();
      Console.Write("Idade: ");
      idade2 - int.Parse(Console.ReadLine());

      // calculo da media das idades solicitada //
      media = (double)(idade1 + idade2) / 2;

      // output da frase solicitada com o resultado da media das idades //
      Console.WriteLine("A idade media de " + nome1 + " e " + nome2 + " eh de " + media.ToString("F1", CI) + " anos");
    }
  }
}
