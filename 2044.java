import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, i, sum, num, count;
		
		
		while(sc.hasNextInt()) {
			n = sc.nextInt();
			if(n == -1) {
				break;
			}
			
			sum = 0;
			count = 0;
			
			for(i = 0; i < n; i++) {
				num = sc.nextInt();
				
				sum += num;
				
				if(sum % 100 == 0) {
					sum = 0;
					count++;
				}
			}
			
		System.out.print(count + "\n");
			
		}
		sc.close();
	}
}
