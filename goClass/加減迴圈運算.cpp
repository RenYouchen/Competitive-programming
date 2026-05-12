#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int x; cin >> x;
	int ans = 0;
	for(int i = 1; i <= x; i++) {
		if(i%2!=0) {
			ans += i;
		} else {
			ans -= i;
		}
	}
	cout << ans << endl;
}
