package code.principal;

import java.util.Scanner;
import java.util.Vector;

public class Code {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a;
		
		while(sc.hasNext()) {
			a = sc.nextInt();
			
			if(a % 6 == 0) 
				System.out.println("Y");
			else
				System.out.println("N");
		}
			
		sc.close();
	}
}
