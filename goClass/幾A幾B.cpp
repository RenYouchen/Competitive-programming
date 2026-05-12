#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string ans,s,raw;
	int n = 3;
	cin >> raw;
	while(n--) {
		ans = raw;
		int a = 0, b = 0;
		cin >> s;
		for(int i = 0; i < s.size(); i++) {
			if(ans[i] == s[i]) {a++; ans[i] = ' ';}
			else for(int n = 0; n < ans.size(); n++) if(s[i] == ans[n]) {b++; ans[n] = ' '; break;}
		}
		printf("%s 為 %dA%dB\n",s.cs,a,b);
	}
}
