#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	double n;cin >> n;
	double ans = 0;
	for(double i = 3; i <= n; i+=2) {
		ans += (i-2)/i;
	}
	printf("1/3+3/5+...+%.0f/%.0f=%.2f\n",n-2,n,ans);
}
