#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int m; cin >> m;
	while(m--) {
		if(m < 7) break;
		if(m%3==2 && m%5==2 && m%7==2) {
			cout << "人數為 " << m << endl;
			return 0;
		}
	}
	cout << "不存在解\n";
}
