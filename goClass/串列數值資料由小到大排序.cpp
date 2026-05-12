#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string s;
	vector<int> v;
	while(cin >> s && s != "end") {
		v.push_back(atoi(s.cs));
	}
	cout << "原始內容是";
	for(int i:v) { cout << " " << i; }
	cout << endl;
	sort(v.begin(),v.end());
	cout << "排序內容是";
	for(int i:v) { cout << " " << i; }
	cout << endl;
}
