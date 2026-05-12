#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<string> v;
	string s;
	getline(cin,s);
	stringstream ss;
	ss << s;
	while(ss >> s) {
		v.push_back(s);
	}

	for(int i = v.size() - 1; i >= 0; i--) {
		cout << v[i]; 
		if(i == 0) cout << endl;
		else cout << ' ';
	}
}
