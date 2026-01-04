import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            int n = sc.nextInt();
            if (n == 0)
                break;

            int mary = 0, john = 0;

            for (int i = 0; i < n; i++) {
                int num = sc.nextInt();
                if (num == 0)
                    mary++;
                else if (num == 1)
                    john++;
            }

            System.out.println("Mary won " + mary +
                               " times and John won " + john + " times");
        }

        sc.close();
    }
}
