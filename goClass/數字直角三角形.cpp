#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n;cin>>n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}
}
