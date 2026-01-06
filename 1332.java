import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        sc.nextLine(); // consome o \n

        for (int i = 0; i < n; i++) {
            String word = sc.nextLine().trim();

            if (word.length() == 5) {
                System.out.println(3);
            } else {
                if (
                    (word.charAt(0) == 'o' && word.charAt(1) == 'n') ||
                    (word.charAt(0) == 'o' && word.charAt(2) == 'e') ||
                    (word.charAt(1) == 'n' && word.charAt(2) == 'e')
                ) {
                    System.out.println(1);
                } else {
                    System.out.println(2);
                }
            }
        }

        sc.close();
    }
}
