import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int teste = 1;

        while (true) {
            int V = sc.nextInt();
            if (V == 0) break;

            int I = V / 50; V %= 50;
            int J = V / 10; V %= 10;
            int K = V / 5;  V %= 5;
            int L = V;

            System.out.println("Teste " + teste++);
            System.out.println(I + " " + J + " " + K + " " + L);
            System.out.println();
        }

        sc.close();
    }
}
