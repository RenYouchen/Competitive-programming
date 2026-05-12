#include <bits/stdc++.h>
using namespace std;

set<string> st;
string s,chset;
int l;

void f(string p, int d) {
	if(d >= l) {
		if(st.count(p)) return;
		cout << p << endl;
		exit(0);
	}

	for(auto ch: chset) {
		f(p+ch, d+1);
	}
}

int main() {
	cin >> chset >> l >> s;
	for(int i = 0; i < s.size(); i++) {
		st.insert(s.substr(i,l));
	}
	f("",0);
}
