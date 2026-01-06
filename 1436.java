import java.util.Scanner;
import java.util.Vector;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t, n, i, j;
		
		t = sc.nextInt();
		for(i = 1; i <= t; i++) {
			n = sc.nextInt();
			
			Vector<Integer> v = new Vector<>(n);
			for(j = 0; j < n; j++) {
				v.add(sc.nextInt());
			}
			
			int pos = n / 2;
			
			System.out.println("Case " + i + ": " + v.get(pos));
		}
			
		sc.close();
	}
}
