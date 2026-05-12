#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n; cin >> n;

	for(int i = 1; i <= n*2; i+=2) {
		for(int j = 0; j < i; j++) {
			if(i == n*2-1) {
				cout << ((j%2==0)? '*' : ' ');
			} else {
				cout << ((j==i-1||j==0)?'*':' ');	
			}
		}
		cout << " \n";
	}
}
