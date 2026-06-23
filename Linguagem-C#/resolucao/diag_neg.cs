using System;
using System.Globalization;

namespace diag_neg
{
  class Program
  {
    static void Main(string[] args) 
    {
      // declaracao das variaveis a serem utilizadas para a resolucao //
      int N, cont;

      // input dos dados a serem utilizados //
      Console.Write("Qual a ordem da matriz? ");
      N = int.Parse(Console.ReadLine());

      // criacao da matriz para alocar os numeros //
      int [,] mat = new int[N,N];

      // criacao da regra para percorrer toda a matriz //
      for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
          Console.Write("Elemento [" + i + "," + j + "]: ");
          mat[i, j] = int.Parse(Console.ReadLine());
        }
      }

      // output da diagonal principal da matriz //
      Console.WriteLine("Diagonal principal: ");
      for (int i = 0; i < N; i++) {
        Console.Write(mat[i, i] + " ");
      }
      Console.WriteLine();

      // criacao da regra para output da quantidade de valores negativos //
      cont = 0;
      for (int i = 0; i < N; i++0 {
        for (int j = 0; j < N; j++) {
          if (mat[i, j] < 0) {
            cont++;
          }
        }
      }
      Console.WriteLine("Quantidade de negativos = " + cont);
    }
  }
}
