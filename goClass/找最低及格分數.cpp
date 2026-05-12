#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int m = 10000;
	while(n--) {
		int a; cin >> a;
		if(a < m && a >= 60) m = a;
	}
	if(m == 10000) {
		cout << "不存在最低及格分數\n";
		exit(0);
	}
	printf("最低及格分數 %d\n", m);
}
