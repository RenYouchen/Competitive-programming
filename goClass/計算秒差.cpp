#include<bits/stdc++.h>
using namespace std;
int main() {
	string a,b;
	cin >> a >> b;
	stringstream ss;
	ss << a;
	int f = 0,s = 0;
	for(int i = 0; i < 3; i++) {
		string tmp;
		getline(ss,tmp,':');
		f+=stoi(tmp)*pow(60,2-i);
	}
	ss.clear();
	ss << b;
	for(int i = 0; i < 3; i++) {
		string tmp;
		getline(ss,tmp,':');
		s+=stoi(tmp)*pow(60,2-i);
	}
	int result = f-s;
	printf("%s %d 秒\n",s>f?"快":"慢",result>0?result:-result);
}
