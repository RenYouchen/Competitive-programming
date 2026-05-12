#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int count = 0,a;
	vector<int> v;
	for(int i = 0; i < 10; i++) {
		cin >> a;
		if(a % 4 == 0) {
			v.push_back(a);
			count += a;
		}
	}
	for(int i = 0; i < v.size(); i++) {
		cout << v[i];
		if(i == v.size()-1) cout << endl;
		else cout << " ";
	}

	cout << count << endl;
}
