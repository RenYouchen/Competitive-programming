#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int count = 0;
	cin >> s;
	for(long long i = s.find("AUG"); i < s.length() - 2; i+=3) {
		string temp = s.substr(i,3);
		if(temp == "UAA" || temp == "UAG" || temp == "UGA") break;
		count++;
	}
	cout << count << '\n';
}
