#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n = 3;
	while(n--) {
		vector<int> v;
		string s;
		cin >> s;
		for(int i = 0; i < 5; i++) {
			v.push_back(s[i] - '0');
		}
		cout << s << " ";
		if((v[0] + v[2] + v[4] + (v[1] + v[3]) * 5) % 26 == s[5] - 'A' + 1) cout << "Pass\n";
		else cout << "Fail\n";
	}
}
