#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string s; 
	getline(cin, s);
	stringstream ss;
	ss << s;
	vector<string> v;
	while(ss >> s) { v.push_back(s); }
	for(auto i: v) {
		if(i.size()&1) continue;
		cout << i << endl;
	}
}
