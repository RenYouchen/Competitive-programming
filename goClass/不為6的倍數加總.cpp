#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n; cin >> n;
	if(n < 100) {
		cout << "輸入錯誤" << endl;
		return 0;
	}
	int ans = 0;
	for(int i = 100; i <= n; i++) {
		if(i%6!=0)ans+=i;
	}
	cout << ans << endl;
}
