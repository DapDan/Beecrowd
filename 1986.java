import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        if (sc.hasNextInt()) {
            int n = sc.nextInt();
            StringBuilder resposta = new StringBuilder();

            for (int i = 0; i < n; i++) {
                String hex = sc.next();
                int valor = Integer.parseInt(hex, 16);
                resposta.append((char) valor);
            }

            System.out.println(resposta.toString());
        }
        
        sc.close();
    }
}