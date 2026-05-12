#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int a;
	cin >> a;
	if(a < 1000) {
		cout << "消費 " + tos(a) + " 元，還差 " + tos(1000-a) + " 元符合優惠\n";
	} else {
		double b = 1;
		if(a > 5000) b = 0.8; 
		a = (a - (a/1000)*100)*b;
		cout << "折扣後金額為 " + tos(a) + " 元\n";
	}
}
