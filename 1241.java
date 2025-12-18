import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        while (n-- > 0) {
            String principal = sc.next();
            String secundario = sc.next();

            if (principal.endsWith(secundario))
                System.out.println("encaixa");
            else
                System.out.println("nao encaixa");
        }

        sc.close();
    }
}
