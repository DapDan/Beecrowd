import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line;

        while (true) {
            line = br.readLine();
            int n = Integer.parseInt(line);
            if (n == 0) break;

            while (true) {
                line = br.readLine();
                String[] parts = line.split(" ");

                if (parts[0].equals("0"))
                    break;

                int[] entrada = new int[n];
                int[] saida = new int[n];
                Stack<Integer> pilha = new Stack<>();

                for (int i = 0; i < n; i++)
                    entrada[i] = Integer.parseInt(parts[i]);

                for (int i = 0; i < n; i++)
                    saida[i] = i + 1;

                int i = n - 1, j = n - 1, flag = 0;

                while (true) {
                    if (i >= 0 && j >= 0 && entrada[i] == saida[j]) {
                        i--; j--; flag++;
                    }
                    else if (!pilha.empty() && j >= 0 && pilha.peek() == saida[j]) {
                        pilha.pop();
                        j--; flag++;
                    }
                    else if (i >= 0 && j >= 0) {
                        pilha.push(entrada[i]);
                        i--;
                    }
                    else break;
                }

                System.out.println(flag == n ? "Yes" : "No");
            }
            System.out.println();
        }
    }
}
