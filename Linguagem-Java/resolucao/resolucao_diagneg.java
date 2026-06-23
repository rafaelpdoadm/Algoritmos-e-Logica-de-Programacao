import java.util.Locale;
import java.util.Scanner;

public class resolucao_diagneg {
  public static void main(String[] args) {
    Locale.setDefault(Locale.US);
    Scanner sc = new Scanner(System.in);

    // declaracao das variaveis a serem utilizadas //
    int N, cont;

    // imput da ordem da matriz para a resolucao //
    System.out.print("Qual a ordem da matriz? ");
    N = sc.nextInt();

    // criacao da matriz de acordo com o valor alocado em N //
    int[][] mat = new int[N][N];

    // criacao da logica em que serao pedidos os valores de cada um dos espacos da matriz //
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        System.out.print("Elemento [" + i + "," + j + "]: ");
        mat[i][j] = sc.nextInt();
      }
    }

    // output da diagonal principal da matriz digitada //
    System.out.println("Diagonal principal:");
    for (int i = 0; i < N; i++) {
      System.out.print(mat[i][i] + " ");
    }

    System.out.println();

    // output da quantidade de numeros negativos da matriz //
    cont = 0;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (mat[i][j] < 0) {
          cont++;
        }
      }
    }

    System.out.println("Quantidade de negativos = " + cont);
    
    sc.close();
    }
}
