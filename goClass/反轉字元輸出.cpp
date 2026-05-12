#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string s;
	cin >> s;
	for(int i = s.size() - 1; i >= 0; i--) {
		cout << s[i] << endl;
	}
}
