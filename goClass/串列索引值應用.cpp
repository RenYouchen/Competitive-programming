#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	//vector<string> v;
	for(int i = 0; i < 5; i++) {
		string s;
		getline(cin,s);
		printf("索引值 %d 串列内容是 %s\n",i,s.cs);
		//v.push_back(s);
	}
}
