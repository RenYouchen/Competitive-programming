#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<int> v(26,0);
	for(auto i:s) {
		v[i-'a']+=1;
	}
	for(int i = 0; i < 26; i++) {
		if(v[i]!=0) cout << (char)(i+'a') << " : " << v[i] <<  endl;
	}
}
