#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string s;
	vector<int> v;
	getline(cin,s);
	char *st = strdup(s.cs);
	char *split = " ,";
	char *p;
	p = strtok(st,split);

	while(p != NULL) {
		if(find(v.begin(),v.end(),atoi(p))==v.end()) v.push_back(atoi(p));
		p = strtok(NULL, split);
	}

	sort(v.begin(),v.end(),greater<int>());
	cout << "第2大的數是 : " << v[1] << endl;
}
