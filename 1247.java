import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextInt()) {
            int d = sc.nextInt();
            int vf = sc.nextInt();
            int vg = sc.nextInt();

            double tempoF = 12.0 / vf;
            double tempoG = Math.sqrt(d * d + 144.0) / vg;

            if (tempoG <= tempoF)
                System.out.println("S");
            else
                System.out.println("N");
        }

        sc.close();
    }
}
