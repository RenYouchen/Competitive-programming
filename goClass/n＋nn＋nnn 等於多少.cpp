#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a,b,c;
	a = n;
	b = a*10+n;
	c = b*10+n;
	printf("%d+%d+%d=%d\n",a,b,c,a+b+c);
}
