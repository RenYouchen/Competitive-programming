#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int cnt = 0;
	for(int i = 0; i < c; i++) {
		cout << setw(3) << a + b*i;
		cout << " ";
		cnt += a+b*i;
		if((i+1)%5 == 0 || i == c-1) cout << endl;
	}
	cout << "Sum = " << cnt << endl;
}
