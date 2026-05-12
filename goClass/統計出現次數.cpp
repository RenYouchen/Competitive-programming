#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<int> v;
	map<int,int> mp;

	for(int i = 0; i < 10; i++) {
		int a; cin >> a;
		v.push_back(a);
	}

	for(int i = 0; i < 10; i++) {
		mp[v[i]]++;
		printf("%d 出現在 %d 索引值 累計出現 %d 次\n",v[i],distance(v.begin(),find(v.begin(),v.end(),v[i])),mp[v[i]]);
	}
}	
