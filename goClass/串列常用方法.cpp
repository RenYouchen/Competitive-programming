#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<int> v;
	while(1) {
		int a; cin >> a;
		if(a == -9999) break;
		v.push_back(a);
	}
	cout << "串列內容是";
	for(auto i : v) {
		cout << " " << i;
	}
	cout << endl;
	cout << "輸入個數共有 " << v.size() << endl;
	cout << "最小值 " << *min_element(v.begin(),v.end()) << endl;
	cout << "最大值 " << *max_element(v.begin(),v.end()) << endl;
	cout << "第一個數字是 " << v[0] << endl;
	cout << "最後一個數字是 " << v[v.size()-1] << endl;
	sort(v.begin(),v.end(),[](int a,int b) { return a < b; });
	cout << "由小排到大是";
	for(int i:v) { cout << " " << i; }
	sort(v.begin(),v.end(),[](int a,int b) { return a > b; });
	cout << endl;
	cout << "由大排到小是";
	for(int i:v) { cout << " " << i; }
	cout << endl;
		

}

