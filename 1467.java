import java.util.Scanner;

public class 1467 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int A = sc.nextInt();
            int B = sc.nextInt();
            int C = sc.nextInt();

            if (A == B && A == C)
                System.out.println("*");
            else if (A == B && A != C)
                System.out.println("C");
            else if (A == C && A != B)
                System.out.println("B");
            else if (B == C && B != A)
                System.out.println("A");
        }

        sc.close();
    }
}
