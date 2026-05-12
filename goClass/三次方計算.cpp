#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n; cin >> n;
	for(int i = 1; i <= n; i++) {
		printf("數值 %d 三次方等於 %.0f\n",i,pow(i,3));
	}
}
