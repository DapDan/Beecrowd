import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (true) {
            int n = sc.nextInt();
            if (n == 0) break;

            Stack<Character> pilha = new Stack<>();
            char[] entrada = new char[n];
            char[] saida = new char[n];
            StringBuilder output = new StringBuilder();

            for (int i = 0; i < n; i++)
                entrada[i] = sc.next().charAt(0);

            for (int i = 0; i < n; i++)
                saida[i] = sc.next().charAt(0);

            int i = 0, j = 0, flag = 0;

            while (i <= n - 1) {
                pilha.push(entrada[i]);
                output.append('I');
                i++;

                while (!pilha.isEmpty() && j < n && pilha.peek() == saida[j]) {
                    pilha.pop();
                    output.append('R');
                    j++;
                    flag++;
                }
            }

            if (flag == n)
                System.out.println(output.toString());
            else
                System.out.println(output.toString() + " Impossible");
        }
        sc.close();
    }
}
