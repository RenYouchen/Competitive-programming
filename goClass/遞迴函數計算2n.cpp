#include <bits/stdc++.h>
using namespace std;

int f(int a) {
	if(a == 1) return 2;
	else return f(a-1)+2*a;
}

int main() {
	int a; cin >> a;
	printf("f(%d)=%d\n", a, f(a));
}
