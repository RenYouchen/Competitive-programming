#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
#define INF -1000000000
using namespace std;

int main() {
	int min = INF;
	while(true) {
		int n; cin >> n;
		if(n == 9999) break;
		if(n > min) min = n;
	}
	if(min==INF) {
		cout << "不存在最大值" << endl;
	} else {
		cout << min << endl;
	}
}
