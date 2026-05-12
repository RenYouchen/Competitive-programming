#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	vector<int> v;
	while(getline(cin, s, '/')) {
		v.push_back(stoi(s));
	}
	int total = 0;
	for(int i = 0; i < v.size(); i++) {
		cout << v[i];
		if(i != v.size()-1) cout << " ";
		else cout << endl;
		total += v[i];
	}
	cout << total << endl;
}
