#include <bits/stdc++.h>
using namespace std;
#define cs c_str()
int main() {
	string s, sec;
	cin >> s >> sec;
	int count = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s.substr(i,sec.size()) == sec) count++;
	}
	printf("%s查詢%s,出現%d次\n",s.cs,sec.cs,count);
}
