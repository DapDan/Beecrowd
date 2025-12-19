import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int r1, x1, y1, r2, x2, y2;
	    int dx, dy, dist, diffRaio;

	    while(sc.hasNextInt()) {
	    	r1 = sc.nextInt();
	    	x1 = sc.nextInt();
	    	y1 = sc.nextInt();
	    	r2 = sc.nextInt();
	    	x2 = sc.nextInt();
	    	y2 = sc.nextInt();
	    	
	        dx = (x2 - x1);
	        dy = (y2 - y1);

	        dist = (dx * dx) + (dy * dy);
	        diffRaio = r1 - r2;

	        if(diffRaio >= 0 && dist <= diffRaio * diffRaio)
	            System.out.println("RICO");
	        else
	        	System.out.println("MORTO");
		}	
	}
}