#include <bits/stdc++.h> 
using namespace std;

int main() {
	string s;
	vector<string> v;
	while(cin >> s) {
		v.push_back(s);
	}
	for(int i = 0; i < v.size(); i++) {
		cout << v[i];
		if(i == v.size()-1) cout << endl;
		else cout << " ";
	}
}
