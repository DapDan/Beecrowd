import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        double valor = 0.0;

        for (int i = 0; i < N; i++) {
            valor = 1.0 / (2.0 + valor);
        }

        valor += 1.0;

        System.out.printf("%.10f\n", valor);
        sc.close();
    }
}
