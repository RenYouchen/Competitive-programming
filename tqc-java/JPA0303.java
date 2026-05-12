import java.util.Scanner;

class JPA0303 {
	public static void main(String[] args) {
		System.out.printf("1~1000中的完美數有:");
		for(int a = 1; a <=1000; a++) {
			int sum = 0;
			for(int i = 1; i < a; i++) {
				if(a % i == 0) {
					sum+=i;
				}
			}
			if(sum == a) {
				System.out.printf(" %s", a);
			}
		}
	}
}
