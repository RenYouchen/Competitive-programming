#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<int> v;
	while(1) {
		int a;
		cin >> a;
		if(a == -9999) break;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),[](int a,int b) {return a > b;});
	for(auto i : v) { cout << i << " ";}
}	
