#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = n / 10;
	if(a > 5) a = 5;
	cout << "買了"+ tos(n) +"個麵包" << endl;
	cout << "贈送"+ tos(a) +"個麵包" << endl;
	cout << "總共"+ tos(a+n) +"個麵包" << endl;
}
