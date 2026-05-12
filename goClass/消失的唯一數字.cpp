#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	bool n[10] = { false };
	string s;
	cin >> s;
	for(auto i: s) {
		n[i - '0'] = true;
	}
	for(int i = 0; i < 10; i++) {
		if(!n[i]) cout << i << " 沒有出現在輸入内容中\n";
	}
}
