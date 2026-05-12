#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int a[10] = {0};
vector<int> v;
string s;
int main() {
	cin >> s;
	for(auto i:s) {
		a[i - '0']++;
	}
	for(int i = 0; i < 10; i++) {
		if(a[i] == 1) {
			v.push_back(i);
		}
	}
	sort(v.begin(),v.end(),[](int aa, int b) {return s.find(aa+'0') < s.find(b+'0');});
	for(int i = 0; i < v.size(); i++) {
		cout << v[i];
		if(i != v.size()-1) cout << " ";
		else cout << '\n';
	}
}
