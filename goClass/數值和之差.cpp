#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<int> v;
	int n = 6;
	while(n--) {
		int a; cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),greater<int>());
	cout << v[0] + v[1] + v[2] - v[3] - v[4] -v[5] << endl;
}
