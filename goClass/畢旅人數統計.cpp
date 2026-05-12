#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	cout << "各班人數為";
	string s;
	int total = 0;
	while(cin >> s && s != "end") {
		cout << ' ' << s;
		total += atoi(s.cs);
	}
	printf("\n總和 %d\n",total);
}
