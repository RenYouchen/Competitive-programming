#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n; cin >> n;
	int total = 0;
	for(int i = 1; i <= n; i++) {
		if(i%2==0) {
			cout << i << endl;
			total += i;
		} 
	}
	cout << "總和 " << total << endl;
}
