#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v(n+1,0);
	string a;
	while(getline(cin,a,',')) {
		v[stoi(a)]=1;
	}
	for(int i = 1; i < n; i++) {
		if(v[i] == 0) cout << i << endl;
	}
}
