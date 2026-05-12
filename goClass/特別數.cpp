#include <bits/stdc++.h>
using namespace std;
#define tos(x) to_string(x)

int main() {
	int n;
	cin >> n;
	for(int i = pow(10,n-1); i < pow(10,n); i++) {
		string tmp = tos(i*4);
		reverse(tmp.begin(),tmp.end());
		if(tmp == tos(i)) {
			cout << tmp << endl;
			break;
		}
	}
}
