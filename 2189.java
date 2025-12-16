import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int teste = 0;

        while (true) {
            int n = sc.nextInt();
            if (n == 0) break;

            teste++;
            int winner = 0;

            for (int i = 1; i <= n; i++) {
                int num = sc.nextInt();
                if (num == i)
                    winner = num;
            }

            System.out.println("Teste " + teste);
            System.out.println(winner);
            System.out.println();
        }

        sc.close();
    }
}
