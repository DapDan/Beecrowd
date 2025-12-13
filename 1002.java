import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double R = sc.nextDouble();
        double PI = 3.14159;

        double A = PI * R * R;

        System.out.printf("A=%.4f%n", A);

        sc.close();
    }
}
