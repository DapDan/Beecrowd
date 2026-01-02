import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int res = 0;
            for (int j = 0; j < n; j++) {
                res += Math.pow(2, j);
            }
            System.out.println(res);
        }

        sc.close();
    }
}
