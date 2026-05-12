#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int m,n; cin >> m >> n;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout << '*';
		}
		cout << endl;
	}
}
