import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        if (N == 0) {
            System.out.printf("%.10f\n", 3.0);
            return;
        }

        double x = 6.0;
        for (int i = 1; i < N; i++) {
            x = 6.0 + 1.0 / x;
        }

        double ans = 3.0 + 1.0 / x;
        System.out.printf("%.10f\n", ans);
    }
}
