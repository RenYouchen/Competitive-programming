import java.util.Scanner;

class JPA0301 {
	public static void main(String[] args) {
		var sc = new Scanner(System.in);
		System.out.println("Input:");
		int a = sc.nextInt();
		int sum = 0;
		for(int i = 1; i <= a; i++) {
			sum+=i;
		}
		System.out.printf("1 + ... + %d = %d\n", a, sum);

	}
}
