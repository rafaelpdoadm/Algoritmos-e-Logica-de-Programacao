using System;
using System.Globalitazion;

namespace casting
{
  class Program
  {  
    static void Main(string[] args)
    {
      CultureInfo CI = CultureInfo.InvariantCulture;

      int x, y;
      x = 10;
      y = 20;
      Console.WriteLine(x);
      Console.WriteLine(y);

      int i;
      double d;
      i = 5;
      d = 2 * i;
      Console.WriteLine(i);
      Console.WriteLine(d. ToString("F2", CI));
      
      double b1, b2, h, area;
      b1 = 6.0;
      b2 = 8.0;
      h= 5.0;
      area = (double) (b1 + b2) / 2 * h;
      Console.WriteLine(area. ToString("F2", CI));

      int a, b, resultado;
      a = 5;
      b = 2;
      resultado = (double) a / b;
      Console.WriteLine(resultado);

      double d;
      int t;
      d = 5.0;
      t = (int)d;
      Console.WriteLine(t);
    }
  }
}