#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<int> v;
	while(1) {
		int a;
		cin >> a;
		if(a == -1) break;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),[](int a, int b){return a > b;}); 
	for(int i = 0; i < 3; i++) {
		cout << "第" + tos(i+1) + "名" + tos(v[i]) + "分" << endl;
	}
}
