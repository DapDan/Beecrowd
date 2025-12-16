import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLong()) {
            long a = sc.nextLong();
            long b = sc.nextLong();

            long res = a ^ b;

            System.out.println(res);
        }

        sc.close();
    }
}
