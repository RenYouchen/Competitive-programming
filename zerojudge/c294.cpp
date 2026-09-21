#include <bits/stdc++.h>
using namespace std;

#define a input[0] 
#define b input[1] 
#define c input[2]

int main() {
	int input[3];
	cin >> a >> b >> c;
	string s;
	sort(input, input + 3);
	if(a+b <= c) {
		s = "No";
	} else if(a*a+b*b < c*c) {
		s = "Obtuse";
	} else if(a*a+b*b == c*c) {
		s = "Right";
	} else if(a*a+b*b > c*c) {
		s = "Acute";
	}
	printf("%d %d %d\n%s", a, b, c, s.c_str());
}
