import java.util.Scanner;

class JPA0209 {
	static void func() {
		Scanner sc = new Scanner(System.in);

		double x,y;
		System.out.printf("請輸入x座標：");
		x = sc.nextDouble();
		System.out.printf("請輸入y座標：");
		y = sc.nextDouble();
		String out = "";


		if(x == 0 && y == 0) {
			out = "在原點上";
		} else if(x == 0 && y != 0) {
			out = "在y軸上";
		} else if(x != 0 && y == 0) {
			out = "在x軸上";
		} else if(x > 0 && y > 0) {
			out = "在第一象限";
		} else if(x > 0 && y < 0) {
			out = "在第四象限";
		} else if(x < 0 && y > 0) {
			out = "在第二象限";
		} else if(x < 0 && y < 0) {
			out = "在第三象限";
		}

		System.out.printf("(%.2f,%.2f)%s\n", x,y,out);
	}

	public static void main(String[] args) {
		for(int i = 0; i < 4; i++)
			func();
	}


}
