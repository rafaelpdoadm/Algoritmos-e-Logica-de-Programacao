import java.util.Locale;

public class casting {
  public static void main(String[] args) {
    Locale.setDefault(Locale.US);

    // output de dados com operacao matematica //
    int x, y;
    x = 5;
    y = 2 * x;
    System.out.println(x);
    System.out.println(y);

    // output de dados decimais com operacao matematica //
    int z;
    double a;
    z = 5;
    a = 2 * z;
    System.out.println(z);
    System.out.println(String.format("%.1f", a));

    // output de dados com operacao matematica utilizando mais variaveis //
    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    System.out.println(area);

    // output de operacao inteira //
    int q, w; 
    double resultado;
    q = 5;
    w = 2;

    resultado = (double) q / w;

    System.out.println(resultado);

    // converter de double para inteiro //
    double e;
    int r;
    e = 5.0;
    r = (int) e;
    System.out.println(r);
  }
}