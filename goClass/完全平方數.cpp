#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n;
	cin >> n;
	if(sqrt(n)!= (int)sqrt(n)) {
		cout << tos(n) + "不是完全平方數" << endl;
		cout << (int)pow((int)sqrt(n)+1,2) << "是下一個完全平方數" << endl;
	} else {
		cout << tos(n) + "是完全平方數" << endl;
	}
}
