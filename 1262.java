import java.lang.Math;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String trace;
		int procs;
				
		while(sc.hasNext()) {
			trace = sc.next();
			procs = sc.nextInt();
			
			int conta, i, tam;
			conta = 0;
			i = 0;
			tam = trace.length();
			
			while(i < tam) {
				if (trace.charAt(i) == 'W') {
	                conta++;
	                i++;
	            } else { // 'R'
	                int contaR = 0;
	                while (i < tam && trace.charAt(i) == 'R') {
	                    contaR++;
	                    i++;
	                }
	                conta += (int)Math.ceil((double)contaR / procs);
	            }
			}
			
			System.out.print(conta + "\n");
		}
		
			
		sc.close();
	}
}