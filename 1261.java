import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int M = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());

        Map<String, Long> dict = new HashMap<>();

        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            dict.put(st.nextToken(), Long.parseLong(st.nextToken()));
        }

        for (int i = 0; i < N; i++) {
            long total = 0;
            while (true) {
                String line = br.readLine();
                if (line.equals(".")) break;

                st = new StringTokenizer(line);
                while (st.hasMoreTokens()) {
                    total += dict.getOrDefault(st.nextToken(), 0L);
                }
            }
            System.out.println(total);
        }
    }
}
