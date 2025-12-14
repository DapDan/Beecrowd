import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int c, b, e;
		int i, j;
		
		c = sc.nextInt();
		
		while (c-- > 0) {
			b = sc.nextInt();
			e = sc.nextInt();
			
			StringBuilder seq = new StringBuilder();
			
			for(i = b; i <= e; i++) {
				seq.append(i);
			}
			
			String inv = new StringBuilder(seq).reverse().toString();
			System.out.println(seq.toString() + inv);
			
		}
		
		sc.close();
	}
}