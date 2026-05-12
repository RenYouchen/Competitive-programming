#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	string up = "", lw = "";
	for(auto i:s) {
		if(isupper(i)) up+=i;
		else lw+=i;
	}
	cout << up << endl << lw << endl << up.size() << endl;
}
