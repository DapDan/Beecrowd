import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, i, a , b, res;
		String linha;
		
		n = sc.nextInt();
		for(i = 0; i < n; i++) {
			linha = sc.next();
			
			a = linha.charAt(0) - '0';
			b = linha.charAt(2) - '0';
			
			if (linha.charAt(0) == linha.charAt(2)) {
	            res = a * b;
	        } else {
	            if (Character.isUpperCase(linha.charAt(1)))
	                res = b - a;
	            else
	                res = a + b;
	        }

	        System.out.println(res);
		}	
	}
}