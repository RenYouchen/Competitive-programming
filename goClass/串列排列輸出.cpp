#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string raw; getline(cin, raw);
	char *str = strdup(raw.cs);
	char *split = ", ";
	char *p;
	p = strtok(str,split);
	int count = 0;
	while(p!=NULL) {
		cout << setw(3) << p;
		p = strtok(NULL,split);
		count++;
		if(count%3==0) cout << endl;
	}
}
