#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int m;
	cin >> m;
	if(m >= 20000) { 
		m*=0.7;
	} else if(m >= 10000) {
		m *=0.8;
	} else if(m >= 5000){ 
		m *=0.9;
	}
	cout << "應付金額 "+tos(m) << endl;

}
