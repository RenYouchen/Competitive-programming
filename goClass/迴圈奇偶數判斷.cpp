#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n; cin >> n;
	for(int i = 1; i <= n; i++) {
		cout << i << ((i%2==0)?" 是偶數": " 是奇數") << endl;
	}
}
