#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string a;
	vector<string> v;
	while(cin >> a && a != "end") {
		v.push_back(a);
	}
	printf("共有%d筆",v.size());
	for(string i:v) { cout << " " << i;}
	cout << endl;
}
