//import java.util.Locale;
import java.util.Scanner;

public class resolucao_menor3 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    // declaracao das variaveis a serem utilizadas //
    int a, b, c, menor;

    // input dos dados a serem trabalhados para a resolucao //
    System.out.print("Primeiro valor: ");
    a = sc.nextInt();
    System.out.print("Segundo valor: ");
    b = sc.nextInt();    
    System.out.print("Terceiro valor: ");
    c = sc.nextInt();

    // logica para investigarmos qual dos numeros a serem digitados e o menor comparado aos outros //
    if (a < b && a < c) {
      menor = a;
    }
    else if (b < c) {
      menor = b;
    }
    else {
      menor = c;
    }

    System.out.println("Menor = " + menor);
    
    sc.close();
    }
}