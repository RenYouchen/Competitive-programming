#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int v[3] = { 0 };
	while(cin >> s && s != "end") {
		v[s[0]-'A']++;
	}
	for(int i = 0; i < 3; i++) {
		printf("%c得%d票\n", i+ 'A', v[i]);
	}
}
