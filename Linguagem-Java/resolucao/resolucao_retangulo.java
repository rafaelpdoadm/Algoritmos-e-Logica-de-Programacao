// import java.util.Locale;
import java.util.Scanner;

public class resolucao_retangulo {
  public static void main(String[] args) {
  Scanner sc = new Scanner(System.in);
    
    // declaracao das variaveis a sere utilizadas na resolucao //
    double base, altura, area, perimetro, diagonal;

    // input para coleta dos valores a serem alocados nas variaveis //
    System.out.print("Base do retangulo: ");
    base = sc.nextDouble();
    System.out.print("Altura do retangulo: ");
    altura = sc.nextDouble();

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = Math.sqrt(Math.pow(base, 2.0) + Math.pow(altura, 2.0));

    System.out.println("Area = " + String.format("%.4f", area));
    System.out.println("Perimetro = " + String.format("%.4f", perimetro));
    System.out.println("Diagonal = " + String.format("%.4f", diagonal));
    
  sc.close();
  }
}