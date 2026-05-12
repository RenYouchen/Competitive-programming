#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, sec, rep;
	getline(cin, s);
	cin >> sec >> rep;
	printf("原字串 %s\n", s.c_str());
	s = s.replace(s.find(sec),sec.size(),rep);
	cout <<  "取代後字串 " << s << endl;
}
