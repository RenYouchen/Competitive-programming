#include <bits/stdc++.h>
using namespace std;

int main() {
	int n[3];
	cin >> n[0] >> n[1] >> n[2];
	int a = n[1] - n[0];
	for(auto i:n) {
		cout << i << ' ';
	}
	cout << (n[1]+a == n[2]? "為":"不為") << "等差數列";
}
