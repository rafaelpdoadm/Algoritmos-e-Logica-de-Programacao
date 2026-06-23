using System;
using System.Globalization;

namespace matrizes
{
  class Program
  {
    static void Main(string[] args)
    {
      CultureInfo CI = CultureInfo.InvariantCulture;

      int M, N;

      Console.Write("Quantas linhas vao ter na matriz? ");
      M = int.Parse(Console.ReadLine());
      Console.Write("Quantas colunas vao ter na matriz? ");
      N = int.Parse(Console.ReadLine());

      int[,] mat = new int[M, N];

      for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
          Console.Write("Elemento [" + i + "," + j + "]: ");
          mat[i, j] = int.Parse(Console.ReadLine());
        }
      }
      Console.WriteLine();
      Console.WriteLine("Matriz digitada: ");
      for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
          Console.Writel(mat[i, j] + " ");
        }
        Console.WriteLine();
      }
    }
  }
}
