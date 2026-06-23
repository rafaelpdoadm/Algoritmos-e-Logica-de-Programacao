using System;
namespace resolucao_retangulo
{
  class Program
  {
    static void Main(string[] args)
    {
      CultureInfo CI = CultureInfo.InvariantCulture;

      // declaracao das variaveis a serem utilizadas na resolucao //
      double bs, alt, area, peri, diag;

      // imput dos dados a serem trabalhados //
      Console.Write("Base do retangulo: ");
      bs = double.Parse(Console.ReadLine(), CI);
      Console.Write("Altura do retangulo: ");
      alt = double.Parse(Console.ReadLine(), CI);

      // montagem dos calculos para obtencao das respostas solicitadas //
      area = bs * alt;
      peri = 2 * (bs * alt);
      diag = Math.Sqrt(Math.Pow(bs, 2.0) + Math.Pow(alt, 2.0));

      // output dos dados obtidos com os calculos acima //
      Console.WriteLine("Area = " + area.ToString("F4", CI));
      Console.WriteLine("Perimetro = " + peri.ToString("F4", CI));
      Console.WriteLine("Diagonal = " + diag.ToString("F4", CI));
    }
  }
}
