import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
import java.util.Locale;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in).useLocale(Locale.US);
		
		double a, b, c;
		a = sc.nextDouble();
		b = sc.nextDouble();
		c = sc.nextDouble();
		
		Double[] v = {a, b, c};
		Arrays.sort(v, Collections.reverseOrder());
		
		a = v[0];
		b = v[1];
		c = v[2];		
		
		if(a >= (b + c)) {
	        System.out.println("NAO FORMA TRIANGULO");
	    }else {
	        if((a * a) == (b * b) + (c * c))
	        	System.out.println("TRIANGULO RETANGULO");
	        else if((a * a) > (b * b) + (c * c))
	        	System.out.println("TRIANGULO OBTUSANGULO");
	        else if((a * a) < (b * b) + (c * c))
	        	System.out.println("TRIANGULO ACUTANGULO");
	        if(a == b && b == c)
	        	System.out.println("TRIANGULO EQUILATERO");
	        else if (a == b || a == c || b == c)
	        	System.out.println("TRIANGULO ISOSCELES");
	    }
			
		sc.close();
	}
}
