#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n; cin >> n;
	int i = 2;
	int count = 0;
	while(count != n) {
		bool flag = false;
		for(int j = 2; j < i; j++) {
			if(i%j==0) {
				flag = true;
				break;
			}
		}
		if(!flag) {
			count++;
			cout << setw(3) << i;
			if(count%10==0) cout << endl;
			else cout << " ";
		}
		i++;
	}
}
