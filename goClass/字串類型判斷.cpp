#include<bits/stdc++.h>
using namespace std;
#define cs c_str()
#define T "True"
#define F "False"

int main() {
	string s;
	cin >> s;
	cout << s << endl;
	string d = F, u = F, l = F, abc = F;
	for(auto i:s) {
		if(isupper(i)) u = T;
		if(islower(i)) l = T;
		if(isdigit(i)) d = T;
		if(u==T || l==T) abc = T;

	}
	printf("大寫 %s\n小寫 %s\n字母 %s\n數字 %s\n",u.cs,l.cs,abc.cs,d.cs);

}
