#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int count = 0;
	string s;
	cin >> s;
	for(auto i:s) {
		if(i=='5') count++;
	}
	cout<<"5共出現 " + tos(count) + " 次\n";
}
