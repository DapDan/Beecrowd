import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, i, h, m, o;

        n = sc.nextInt();

        for(i = 0; i < n; i++) {
            h = sc.nextInt();
            m = sc.nextInt();
            o = sc.nextInt();

            if(o == 1)
                System.out.printf("%02d:%02d - A porta abriu!%n", h, m);
            else
                System.out.printf("%02d:%02d - A porta fechou!%n", h, m);
        }

        sc.close();
    }
}
