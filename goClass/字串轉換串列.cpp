#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int total = 0;
	for(auto i:s) {
		cout << i << endl;
		total += i-'0';
	}
	printf("總和 %d\n",total);
}
