import java.util.Scanner;

class JPA0307 {
	static int gcd(int a, int b) {
		return b == 0 ? a : gcd(b, a%b);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x,y;
		while(true) {
			System.out.println("Input:");
			x = sc.nextInt();
			if(x == 999) break;
			y = sc.nextInt();
			System.out.println(gcd(x,y));
		}
	}
} 
