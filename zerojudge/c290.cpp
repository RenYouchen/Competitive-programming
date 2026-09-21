#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int a = 0, b = 0;
	for (int i = 0; i < s.length(); i++) {
		if(i%2) {
			b+=s[i]-'0';
		} else {
			a+=s[i]-'0';
		}
	}
	cout << abs(a-b) << '\n';
}
