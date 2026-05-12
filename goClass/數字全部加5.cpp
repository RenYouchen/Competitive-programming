#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<int> v;
	for(int i = 0; i < 10; i++) {
		int a; cin >> a;
		v.push_back(a+5);
	}
	sort(v.begin(),v.end());
	for(int i: v){
		cout << i << endl;
	}
}
