#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n; cin >> n;
	printf("%d 筆資料, 包含: [",n);
	while(n--) {
		string a; cin >> a;
		printf("'%s'",a.cs);
		if(n!=0) cout << ", ";
	}
	cout << ']' << endl; 
}

