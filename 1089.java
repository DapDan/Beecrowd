import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, i, count, proximo, anterior;
		
		while(sc.hasNextInt()) {
			n = sc.nextInt();
			if(n == 0)
				break;
			
			int v[] = new int[n];
			for(i = 0; i < n; i++) {
				v[i] = sc.nextInt();
			}
			
			count = 0;
			for(i = 0; i < n; i++) {
				anterior = v[(i - 1 + n) % n];
				proximo = v[(i + 1) % n];
				
				if((v[i] > anterior && v[i] > proximo) || (v[i] < anterior && v[i] < proximo))
	                count++; 
			}
			
			System.out.println(count);
		}	
	}
}