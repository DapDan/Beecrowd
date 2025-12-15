import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n, i, j, count;

	    n = sc.nextInt();
	    n += 1;

	    int[][] m = new int[n][n];

	    for(i = 0; i < n; i++) {
	        for(j = 0; j < n; j++) {
	            m[i][j] = sc.nextInt();
 	        }
	    }

	    for(i = 0; i < n - 1; i++) {
	        for(j = 0; j < n - 1; j++) {
	            count = 0;

	            if(m[i][j] == 1)
	                count++;
	            if(m[i][j + 1] == 1)
	                count++;
	            if(m[i + 1][j] == 1)
	                count++;
	            if(m[i + 1][j + 1] == 1)
	                count++;

	            if(count >= 2)
	                System.out.printf("S");
	            else
	            	System.out.printf("U");
	        }
	        System.out.printf("\n");
	    }
		
		sc.close();
	}
}