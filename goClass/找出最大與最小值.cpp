#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<int> v;
	for(int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	cout << "Max = " << *max_element(v.begin(),v.end()) << '\n';	
	cout << "Min = " << *min_element(v.begin(),v.end()) << '\n';	
}
