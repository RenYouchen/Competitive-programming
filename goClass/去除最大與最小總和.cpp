#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int a;
	vector<int> v;
	while(cin >> a && a != -9999) {
		v.push_back(a);
	}
	cout << "原來串列";
	for(auto i : v) cout << " " << i;
	v.erase(max_element(v.begin(),v.end()));
	v.erase(min_element(v.begin(),v.end()));
	cout << "\n最後串列";
	int total = 0;
	for(auto i : v) {cout << " " << i; total += i;}
	printf("\n總和 %d\n",total);
}
