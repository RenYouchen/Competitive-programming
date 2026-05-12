#include <bits/stdc++.h>
using namespace std;

int main() {
	int m = 10000,n;
	while(cin >> n && n != -1) {
		if(n < m) m = n; 
	}
	if(m == 10000) {
		cout << "不存在最小值\n";
		exit(0);
	}
	cout << m << endl;
}
