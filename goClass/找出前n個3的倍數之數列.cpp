#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int m,n; cin >> m >> n;
	while(n!=0) {
		if(m%3==0) {
			n--;
			cout << m << " ";
		}
		m++;
	}
}
