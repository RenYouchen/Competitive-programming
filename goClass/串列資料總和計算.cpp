#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int sum = 0;
	string s;
	cout << "內容是";
	while(cin >> s && s != "end") { sum += atoi(s.cs); cout << " " << s;}
	cout << ", 總和 " << sum << endl;

}
