import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		while(sc.hasNextDouble()) {
			double v = sc.nextDouble();
			double d = sc.nextDouble();
			
			double r = d / 2.0;
            double area = 3.14 * r * r;
            double h = v / area;

            System.out.printf("ALTURA = %.2f\n", h);
            System.out.printf("AREA = %.2f\n", area);
		}
		sc.close();
	}
}