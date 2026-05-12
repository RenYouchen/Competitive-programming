#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<int> v;
	for(int i = 0; i < 10; i++) {
		int a; cin >> a;
		v.push_back(a);
	}

	cout << "原始資料";
	for(auto i:v) cout << " " << i;
	cout << "\n由小到大";
	sort(v.begin(),v.end());
	for(auto i:v) cout << " " << i;
	cout << "\n由大到小";
	sort(v.begin(),v.end(),greater<int>());
	for(auto i:v) cout << " " << i;
	cout << endl;

}
