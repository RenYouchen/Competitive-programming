#include <bits/stdc++.h>
using namespace std;

int main() {
	string s = "7964183052";
	string a; cin >> a;
	for(auto i : a) {
		if(isdigit(i)) cout << s[i-'0'];
		else cout << i;
	}
	cout << endl;
}
