#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() {
	int n; cin >> n;
	int cnt = 0;
	cout << n;
	while(n != 0) {
		n /= 10;
		cnt++;
	}
	printf(" 有 %d 位數字\n",cnt);
}
