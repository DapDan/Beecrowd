import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        while (n-- > 0) {
            int QT = sc.nextInt();
            int S = sc.nextInt();

            int pos = 0;
            int menor = 1000;

            for (int j = 0; j < QT; j++) {
                int guess = sc.nextInt();
                int diff = Math.abs(S - guess);

                if (diff < menor) {
                    menor = diff;
                    pos = j + 1;
                }
            }

            System.out.println(pos);
        }

        sc.close();
    }
}
