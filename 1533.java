import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            int n = sc.nextInt();
            if (n == 0)
                break;

            int maior = -1, maior2 = -1;
            int idx1 = 0, idx2 = 0;

            for (int i = 1; i <= n; i++) {
                int num = sc.nextInt();

                if (num > maior) {
                    maior2 = maior;
                    idx2 = idx1;

                    maior = num;
                    idx1 = i;
                } else if (num > maior2) {
                    maior2 = num;
                    idx2 = i;
                }
            }

            System.out.println(idx2);
        }

        sc.close();
    }
}
