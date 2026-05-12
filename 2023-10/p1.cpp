#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n,x;
	int l = 0,r = 0;
	cin >> x >> n;
	int mi = x, ma = x;
	while(n--) {
		int a; cin >> a;
		if(a > x) {
			r++;
			ma = max(a,ma);
		}
		if(a < x) {
			l++;
			mi = min(a,mi);
		}
	}
	cout << max(r,l) << " " << ((r > l) ? ma : mi);
}
