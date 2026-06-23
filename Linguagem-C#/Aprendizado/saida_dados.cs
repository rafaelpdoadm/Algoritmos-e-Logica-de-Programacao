using system;
using System.Globalization;

namespace saida_dados 
{
  class Program 
  {
    static void Main(string[] args)
    {
      // output de dados //
      Console.Write("Bom dia!");
      Console.WriteLine("Boa tarde!");

      // output de variaveis //
      int x, y;
      x = 10;
      y = 20;
      Console.WriteLine(x);
      Console.WriteLine(y);

      // output de numero com decimal //
      double z;
      z = 2.3456;
      Console.WriteLine(z.ToString("F2, CultureInfo.InvariantCulture"));

      // output de frase utilizando as variaveis declaradas //
      int idade;
      double salario;
      string nome;
      char sexo;

      idade = 32;
      salario = 4560.9;
      nome = "Maria Silva";
      sexo = 'F';

      Console.WriteLine("A funcionaria " + nome + ", sexo " + sexo + ", ganha " + salario.ToString("F2", CultureInfo.InvariantCulture) + " e tem " + idade + " anos");
    }
  }
}
