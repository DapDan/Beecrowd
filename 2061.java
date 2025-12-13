import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, m, i, total;
		String action;
		
		n = sc.nextInt();
		m = sc.nextInt();
		
		total = n;
		
		for(i = 0; i < m; i++) {
			action = sc.next();
			
			if(action.equals("fechou")) {
				total += 1;
			}else {
				total -= 1;
			}
		}
		
		System.out.print(total + "\n");
		
		sc.close();
	}
}
