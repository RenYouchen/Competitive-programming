#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<int> nums;
	for(int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		nums.push_back(n);
	}
	sort(nums.begin(),nums.end(),[](int a,int b) {return a > b;});
	int n = nums.size();

	if(nums[0]*nums[1]*nums[2] > nums[0] * nums[n-1] * nums[n-2]) {
		cout << "由" + tos(nums[2]) + "," + tos(nums[1]) + "," + tos(nums[0]) + "相乘" << endl;
		cout << "最大乘積為" + tos(nums[0]*nums[1]*nums[2]) << endl;
	} else {
		cout << "由" + tos(nums[n-2]) + "," + tos(nums[n-1]) + "," + tos(nums[0]) + "相乘" << endl;
		cout << "最大乘積為" + tos(nums[0]*nums[n-1]*nums[n-2]) << endl;
	}

}
