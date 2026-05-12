#include <bits/stdc++.h>
#define tos(x) to_string(x)
#define cs c_str()
using namespace std;

int main() {
	string s; cin >> s;
	int total = 1;
	for(int i = 0; i < s.size(); i++) {
		total *= s[i] - '0';
		if(i != s.size()-1) cout << s[i] << "*";
		else cout << s[i] << "=";
	}
	cout << total << endl; 
	total = 0;
	for(int i = 0; i < s.size(); i++) {
		total += s[i] - '0';
		if(i != s.size()-1) cout << s[i] << "+";
		else cout << s[i] << "=";
	}
	cout << total << endl;
}
