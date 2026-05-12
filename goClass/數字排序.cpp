#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;
//:3
int main() {
	vector<int> v;
	for(int i = 0; i < 10; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),[](int a, int b) { return a > b; });
	for(int i = v.size() - 3; i <= v.size() - 1; i++) {
		cout << v[i];
		if(i != v.size()-1) cout << " ";
		else cout << "\n";
	}
}
