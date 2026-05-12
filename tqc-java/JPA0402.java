import java.util.Scanner;

class JPA0402 {
	public static int f(int n) {
		return n == 1 ? 1 : n * f(n-1);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(true) {
			System.out.printf("Input n (0 <= n <= 16):");
			int n = sc.nextInt();
			if(n == 999) break;
			System.out.printf("%d的階乘(尾端遞迴) = %d\n%d的階乘(迴圈) = %d\n", n, f(n), n, f(n));
		}
	} 
}
