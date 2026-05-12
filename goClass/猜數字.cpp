#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;
#define NUM 49

int main() {
	while(true) {
		int n; cin >> n;
		cout << "您猜 " << n << " ";
		if(n == NUM) {
			cout << "恭喜答對\n";
			break;
		} else if(n > NUM) {
			cout << "猜小一點\n";
		} else {
			cout << "猜大一點\n";
		}
	}
}
