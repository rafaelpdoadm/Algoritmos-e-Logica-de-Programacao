import java.util.Locale;
import java.util.Scanner;

public class soma_impares {
  public static void main(String[] args) {
    Locale.setDefault(Locale.US);
    Scanner sc = new Scanner(System.in);

    // declaracao das variaveis a serem utilizadas na resolucao //
    int x, y, troca, soma;

    // input dos valores necessarios para a resolucao //
    System.out.println("Digite dois numeros:");
    x = sc.nextInt();
    y = sc.nextInt();
    
    // para garantir que seja analisado na ordem crescente //
    if (x > y) {
      troca = x;
      x = y;
      y = troca;
    }

    // criacao da regra for para percorrer a estrutura acima somando os valores impares //
    soma = 0;
    for (int i = x + 1; i < y; i++) {
      if (i % 2 != 0) {
        soma = soma + i;
      }
    }

    // outpur da mensagem final //
    System.out.println("Soma dos impares = " + soma);
    sc.close();
  }
}
