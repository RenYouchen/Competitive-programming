#include <bits/stdc++.h>
using namespace std;

//def compute(n)
int main() {
	int n; cin >> n;
	string s; cin >> s;
	printf("原文 %s\n", s.c_str());
	for(int i = 0; i < s.size(); i++) {
		s[i] = (((s[i]-'a') + n) % 26) + 'a';
	}
	printf("密文: %s\n", s.c_str());
}
