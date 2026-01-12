import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[] f = new int[46];
		int n, i;
		f[0] = f[1] = 1;
		
		for(i = 2; i < f.length; i++)
			f[i] = f[i - 1] + f[i - 2];
		
		while(sc.hasNext()) {
			n = sc.nextInt();
			if(n == 0)
				break;
			
			System.out.println(f[n]);
		}
		
			
		sc.close();
	}
}