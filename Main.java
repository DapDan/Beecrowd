import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n, i, indice;
		String commands;
		char[] direcao = {'N', 'L', 'S', 'O'}; 
		
		while(true) {
			n = sc.nextInt();
			if(n == 0)
				break;
			
			indice = 0;
			commands = sc.next();
			for(i = 0; i < n; i++) {
				if(commands.charAt(i) == 'D')
					indice = (indice + 1) % 4;
				else if(commands.charAt(i) == 'E')
					indice = (indice - 1 + 4) % 4;
			}
			
			System.out.println(direcao[indice]);
			
		}
			
		sc.close();
	}
}
