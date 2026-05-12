#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string s;
	int count = 0;
	while(cin >> s && s != "end") {
		count++;
		printf("第 %d 項內容是 %s\n", count, s.cs);
	}
}
