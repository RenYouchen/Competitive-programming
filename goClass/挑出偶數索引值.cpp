#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int a;
	vector<int> v;
	cout << "原來串列";
	while(cin >> a && a != -9999) {
		cout << " " << a;
		v.push_back(a);
	}
	printf("\n偶數索引值串列");
	for(int i = 0; i < v.size(); i+=2) {
		cout << " " << v[i];	
	}
	cout << endl;
}	
