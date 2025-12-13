import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int N = sc.nextInt();
            String[] books = new String[N];

            for (int i = 0; i < N; i++) {
                books[i] = sc.next();
            }

            Arrays.sort(books);

            for (String b : books) {
                System.out.println(b);
            }
        }

        sc.close();
    }
}
