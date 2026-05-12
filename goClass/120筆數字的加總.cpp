#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int ans = 0;
	for(int i = 0; i < 120; i++) {
		int n; cin >> n;
		ans += n;
	}
	cout << ans << endl;
}
