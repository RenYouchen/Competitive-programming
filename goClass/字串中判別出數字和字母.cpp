#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	string a = ""; int t = 0;
	for(auto i : s) {
		if(isdigit(i)) {
			t += i - '0';
		} else a += i;
	}
	printf("字母排列為 %s\n數字加總為 %d\n",a.c_str(), t);
}
