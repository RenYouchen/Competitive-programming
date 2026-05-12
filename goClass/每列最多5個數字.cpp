#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n; cin >> n;
	for(int i = 1; i <= n; i++) {
		cout<<setw(2)<<i<<' ';
		if(i%5==0) cout << endl;
	}
}
