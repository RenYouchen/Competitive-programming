#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
#define _loop(x) for(int x = 0; x < 5; x++)
using namespace std;

class ans_data{
	public:
		int ans;
		int a;
		int b;
		int c;
};

int main() {
	vector<int> nums;
	for(int i = 0; i < 5; i++) {
		int n;
		cin >> n;
		nums.push_back(n);
	}
	vector<ans_data> ans;
	_loop(i) {
		_loop(j) {
			_loop(k) {
				if(i==j||i==k||j==k) continue;
				//ans.push_back(nums[i] * nums[j] * nums[k]);
				ans_data d;
				d.ans = nums[i]*nums[j]*nums[k];
				d.a = nums[i];
				d.b = nums[j];
				d.c = nums[k];
				ans.push_back(d);
			}
		}
	}
	sort(ans.begin(),ans.end(),[](ans_data a,ans_data b){return a.ans > b.ans;});
	ans_data a = ans[0];
	vector<int> aaaaa;
	aaaaa.push_back(a.a);
	aaaaa.push_back(a.b);
	aaaaa.push_back(a.c);
	sort(aaaaa.begin(),aaaaa.end());

	printf("由%d,%d,%d相乘\n最大乘積為%d\n",aaaaa[0],aaaaa[1],aaaaa[2],a.ans);
	//cout << ans[0].ans << endl;
}
