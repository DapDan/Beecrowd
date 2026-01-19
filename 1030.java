import java.util.Scanner;

public class Main {
	static int josephus(int n, int k) {
		if (n == 1)
			return 1;
		return (josephus(n - 1, k) + k - 1) % n + 1;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i, n, k, tam, res;
		
		tam = sc.nextInt();
		for(i = 1; i <= tam; i++) {
			n = sc.nextInt();
			k = sc.nextInt();
			
			res = josephus(n, k);
			System.out.println("Case " + i + ": " + res);
		}

			
		sc.close();
	}
}