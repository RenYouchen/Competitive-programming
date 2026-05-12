#include <bits/stdc++.h> 
using namespace std;

int main() {
	double a; cin >> a;
	if((int)a != a) {
		cout << "非整數\n";
		return 0;
	}
	for(int i = 0; i < ((int)a%2==0?(int)a*2:(int)a); i++) {
		cout << "*";
	}
	cout << endl;
}
