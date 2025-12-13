import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, l, i, j;
		int divisores[] = {2, 3, 4, 5};
		int cont[] = {0, 0, 0, 0};
		
		n = sc.nextInt();
		
		for(i = 0; i < n; i++) {
			l = sc.nextInt();
			
			for(j = 0; j < 4; j++) {
				if(l % divisores[j] == 0) {
					cont[j]++;
				}
			}
		}
		
		for (j = 0; j < 4; j++) {
	        System.out.print(cont[j] + " Multiplo(s) de " + divisores[j] + "\n");
	    }
		
		sc.close();
	}
}