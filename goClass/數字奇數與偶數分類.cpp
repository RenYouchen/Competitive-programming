#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<int> v;
	cout << "奇數有";
	for(int i = 0; i < 10; i++) {
		int a; cin >> a;
		if(a&1) cout << " " << a;
		else v.push_back(a);
	}
	cout << endl;
	cout << "偶數有";
	for(int i:v){cout << " " << i;}
	cout << endl;
}
