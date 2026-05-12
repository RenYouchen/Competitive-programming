#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string s;
	vector<string> v;
	while(cin >> s && s != "end") {
		v.push_back(s);
	}
	cout << "原始內容是 ";
	for(string i:v) {cout << i << ' ';}
	cout << endl;
	sort(v.begin(),v.end(),greater<string>());
	cout << "排序內容是 ";
	for(string i:v) {cout << i << ' ';}
	cout << endl;
}
	
