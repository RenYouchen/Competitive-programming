#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

string s;
int main() {
	map<string,int> mp;
	vector<string> v;
	getline(cin, s);
	char *st = strdup(s.cs);
	const char *split = " ,";
	char *p;
	p = strtok(st, split);
	cout << "原串列";
	while(p!=NULL) {
		cout << " " << p;
		mp[p]++;
		p = strtok(NULL, split);
	}
	cout << endl << "重複值";
	for(auto i:mp) {
		if(i.second > 1) v.push_back(i.first);
	}
	sort(v.begin(),v.end(),[] (string a, string b) {
		return s.find(a) < s.find(b);
			});
	for(auto i:v) {cout << " " << i;};
	cout << endl;
}
