#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int cnt = 0;
	int tmp = 6;
	while(cnt <= 3) {
		if(tmp > n) {
			cout << tmp << endl;
			cnt++;
		} 
		tmp+=6;
	}
}
