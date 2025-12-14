import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double n, P, M;

		n = sc.nextDouble();

	    P = n / Math.log(n);
	    M = 1.25506 * (n / Math.log(n));

	    System.out.printf("%.1f %.1f\n", P, M);
		
		sc.close();
	}
}
