import java.util.Locale;

public class saida_dados {
  public static void main(String[] args) {
    // output de dados sem quebra de linha e com quebra de linha //
    System.out.print("Bom dia");
    System.out.println("Boa noite");

    // output de dados numericos //
    int x, y;
    x = 10;
    y = 20;
    System.out.println(x);
    System.out.println(y);

    // output de dados numericos decimais com ponto como separador e com virgula (tirar os locale do inicio e o logo abaixo) //
    Locale.setDefault(Locale.US);
    double z;
    z = 2.3456;
    System.out.println(String.format("%.2f", z));

    // output de texto com informacoes recebidas em imputs de dados, por exemplo //
    int idade;
    double salario;
    String nome;
    char sexo;
    idade = 32;
    salario = 4560.9;
    nome = "Maria Silva";
    sexo = 'F';

    System.out.println("A funcionaria " + nome + ", sexo " + sexo + ", recebe " + String.format("%.2f", salario) + "e tem " + idade + " anos");    
  }
}
