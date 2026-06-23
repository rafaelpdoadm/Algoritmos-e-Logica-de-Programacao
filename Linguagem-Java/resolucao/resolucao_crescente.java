import java.util.Locale;
import java.util.Scanner;

public class resolucao_crescente {
  public static void main(String[] args) {
    Locale.setDefault(Locale.US);
    Scanner sc = new Scanner(System.in);

    // declaracao das variaveis a serem utilizadas na resolucao //
    int x, y;

    // input dos dados a serem utilizados na resolucao //
    System.out.println("Digite dois numeros:");
    x = sc.nextInt();
    y = sc.nextInt();

    // montagem da regra enquanto para buscar os numeros diferentes, caso numeros iguais o programa encerra //
    while (x != y) {
      if (x < y) {
        System.out.println("Crescente!");
      }
      else {
        System.out.println("Decrescente!");
    }
    System.out.println("Digite outros dois numeros:");
    x = sc.nextInt();
    y = sc.nextInt();
    }
    
    sc.close();
    }
}
