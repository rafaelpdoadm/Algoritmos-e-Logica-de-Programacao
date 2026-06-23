using System;
using System.Globalization;

namespace soma_vetor
{
  class Program
  {
    static void Main(string[] args) 
    {
      CultureInfo CI = CultureInfo.InvariantCulture;

      // declaracao das variaveis a serem utilizadas para a resolucao //
      int N;
      double soma, media;

      // imput dos dados a serem utilizados para a resolucao //
      Console.Write("Quandos numeros voce vai digitar? ");
      N = int.Parse(Console.ReadLine());

      // criacao de vetor para alocar os N elementos //
      double[] vet = new double[N];

      // criacao da logica para armazenar os numeros digitados pelo usuario //
      for (int i = 0; i < N; i++) {
        Console.Write("Digite um numero: ");
        cet[i] = double.Parse(Console.ReadLine(), CI);
      }

      // output dos valores //
      Console.WriteLine();
      Console.WriteLine("Valores = ");
      for (int i = 0; i < N; i++) {
        Console.Write(vet[i].ToString("F1", CI) + " ");
      }
      Console.WriteLine();

      // criacao da regra e do calculo para a soma e media dos numeros digitados para o vetor //
      soma = 0;
      for (int i = 0; i < N; i++) {
        soma = soma + vet[i];
      }
      Console.WriteLine("Soma = " + soma.ToString("F2", CI));

      media = soma / N;
      Console.WriteLine("Media = " + media.ToString("F2", CI));
    }
  }
}
