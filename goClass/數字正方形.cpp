#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
#define loop_e(i,n) for(int i = 0; i <= n; i++)
#define loop(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
	int a; cin >> a;
	loop(i,a) {
		loop_e(j,a) {
			cout << j << ' ';
		}
		cout << endl;
	}
}
