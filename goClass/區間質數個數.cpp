#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int a,b;cin >> a >> b;
	vector<int> nums;
	for(int i = a; i <= b; i++) {
		bool flag = false;
		for(int j = 2; j < i; j++) {
			if(i%j==0) {
				flag = true;
				break;
			}
		}
		if(!flag) {
			nums.push_back(i);
		}
	}
	printf("%d 到 %d 共有 %d 個質數, 包含 ",a,b,nums.size());

	for(auto i:nums) {
		cout << i << " ";
	}
	cout << endl;
}
