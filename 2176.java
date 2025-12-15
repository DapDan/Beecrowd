import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i, count;
		String s, res;
		
		
		s = sc.next();
		count = 0;
		for(i = 0; i < s.length(); i++) {
			if(s.charAt(i) == '1') {
				count++;
			}
		}
		
		StringBuilder sb = new StringBuilder(s);
		if(count % 2 == 0) {
			sb.insert(s.length(), "0");
			res = sb.toString();
		}else {
			sb.insert(s.length(), "1");
			res = sb.toString();
		}
			
			
		System.out.printf(res + "\n");

		sc.close();
	}
}