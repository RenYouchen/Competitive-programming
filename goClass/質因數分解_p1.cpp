#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n; cin >> n;
	int i = 2;
	int num = n;
	vector<int> nums;
	while(n > 1) {
		while(n%i==0) {
			n = n/i;
			cout << i << endl;
			nums.push_back(i);
		}
		i++;
	}
}
