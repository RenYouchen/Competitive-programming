#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	map<int,int> mp;
	while(1) {
		int a;
		cin >> a;
		if(a == -1) break;
		mp[a]++;
	}
	vector<pair<int, int>> vec(mp.begin(),mp.end());
	int n = -1;
	sort(vec.begin(),vec.end(),[](pair<int,int> a, pair<int,int> b){ return a.second > b.second; });
	for(auto i : vec) {
		if(n == -1) n = i.second;
		if(i.second != n) break;
		cout << i.first << " ";
	}
}
