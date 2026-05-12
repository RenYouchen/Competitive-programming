#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int t,a,b,c;
	cin >> t >> a >> b >> c;
	cout << "攜帶金額 " + tos(t) << endl;
	cout << "購物金額 " + tos(a*20+b*15+c*10) << endl;
	int ans = t-(a*20+b*15+c*10);
	if(ans < 0) {
		cout << "不足金額 " + tos(-ans) << endl;
	} else if(ans == 0) {
		cout << "剛好支付" << endl;
	} else {
		cout << "應找金額 " + tos(ans) << endl;
	}
}
