#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 12;
	int a = 0, b = 0;
	while(n--) {
		int x; cin >> x;
		if(x&1==1) a++;
		else b++;
	}
	printf("偶數的個數:%d\n奇數的個數:%d\n",b,a);
}
