#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string s;
	for(int i = 0; i < 2; i++) {
		int total = 0;
		cin >> s;cout << s;
		for(int j = 0; j < 3; j++) {
			int a;cin >> a;
			total += a;
			cout << "\t" << a;
		}
		printf("\t%d\t%.3f\n", total, (double)total/3);
	}
}
