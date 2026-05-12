#include <bits/stdc++.h>
using namespace std;

vector<string> mp;
string chset;

void f(string p, int length) {
	if(p.size() == length) {
		mp.push_back(p);
		return;
	}

	for(auto ch: chset) {
		f(p+ch,length);
	}
}

int main() {
	cin >> chset;
	int length; cin >> length;
	string s;
	cin >> s;
	f("",length);
	for(int i = 0; i < s.size(); i++) {
		string tmp = s.substr(i,length);
		for(int j = 0; j < mp.size(); j++) {
			if(tmp == mp[j]) {
				mp[j] = "-1";
			}
		}
	}
	for(auto str: mp) {
		if(str != "-1") {
			cout << str << endl;
			break;
		}
	}
}
