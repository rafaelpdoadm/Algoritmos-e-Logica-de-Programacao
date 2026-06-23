import java.util.Locale;
import java.util.Scanner;

public class soma_vetor {
  public static void main(String[] args) {
    Locale.setDefault(Locale.US);
    Scanner sc = new Scanner(System.in);

    // declaracao das variaveis a serem utilizadas //
    int N;
    double soma, media;

    // imput dos dados a serem utilizadas para a resolucao //
    System.out.print("Quantos numeros voce vai digitar? ");
    N = sc.nextInt();

    // criacao do vetor para armazenamento dos dados a serem somados //
    double[] vet = new double[N];

    // criacao da logica para obter os valores a serem alocados no vetor //
    for (int i = 0; i < N; i++) {
      System.out.println("Digite um numero: ");
      vet[i] = sc.nextDouble();
    }

    System.out.println();
    System.out.print("Valores = ");
    for (int i = 0; i < N; i++) {
      System.out.print(String.format("%.1f", vet[i]));
    }

    System.out.println();

    // output dos valores finais para a resolucao da situacao //
    soma = 0;
    for (int i = 0; i < N; i++) {
      soma = soma + vet[i];
    }
    System.out.println("Soma = " + String.format("%.2f", soma));

    media = soma / N;
    System.out.println("Media = " + String.format("%.2f", media));
    
    sc.close();
    }
}