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
			nums.push_back(i);
		}
		i++;
	}
	if(nums.size() == 1) {
		cout << "-1" << '\n';
		return 0;
	}
	cout << num << "=";
	for(int i = 0; i < nums.size(); i++) {
		if(i == 0) cout << nums[i];
		else cout << "*" << nums[i];
	}
	cout << endl;
}
