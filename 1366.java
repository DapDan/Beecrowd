import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n, ci, vi, pares, i;
		while(sc.hasNext()) {
			n = sc.nextInt();
			if(n == 0)
				break;
			
			pares = 0;
			for(i = 0; i < n; i++) {
				ci = sc.nextInt();
				vi = sc.nextInt();
				
				pares += vi / 2;
			}
			
			pares /= 2;
			System.out.println(pares);
		}
			
		sc.close();
	}
}