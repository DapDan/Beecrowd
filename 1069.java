import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i, j, n, balance, contador;
		String entrada;
		char c;
		
		n = sc.nextInt();
		sc.nextLine();
		
		for(i = 0; i < n; i++) {
			balance = 0;
			contador = 0;
			entrada = sc.nextLine();
			
			for(j = 0; j < entrada.length(); j++) {
				c = entrada.charAt(j);
				
				if(c == '<')
					balance++;
				else if(balance > 0 && c == '>') {
					balance--;
					contador++;
				}
			}
			
			System.out.println(contador);
		}
		
			
		sc.close();
	}
}