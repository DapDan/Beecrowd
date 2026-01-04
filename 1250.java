package code.principal;

import java.util.Scanner;
import java.util.Vector;

public class Code {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int i, j, n, s, hit;
		 
		n = sc.nextInt();
		for(i = 0; i < n; i++) {
			s = sc.nextInt();
			
			Vector<Integer> v = new Vector<>(s);
			for(j = 0; j < s; j++) {
				v.add(sc.nextInt());
			}
			
			String jumps = sc.next();
			hit = 0;
			for(j = 0; j < s; j++) {
	            if(jumps.charAt(j) == 'J' && v.get(j) > 2)
	                hit++;
	            else if(jumps.charAt(j) == 'S' &&  v.get(j) <= 2)
	                hit++;
	        }
			
			 System.out.println(hit);
			
		}
		
		sc.close();
	}
}
