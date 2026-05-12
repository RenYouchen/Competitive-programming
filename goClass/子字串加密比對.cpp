#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string r,m;
	cin >> r >> m;
	string s = "";
	int index = 0;
	for(auto i:m) {
		if(i == r[index]){
			s+=i;
			index++;
		}
	}
	printf("%s %s %s\n",r.cs,m.cs, (r == s)? "True":"False");
}
