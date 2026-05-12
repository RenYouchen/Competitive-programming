#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 1; i <= n; i++) {
		v[i-1] = i;
	}
	int cnt = 1;
	int c = 1;
	while(v.size() > 1) {
		
		for(auto i = v.begin(); i != v.end();) {
			if(cnt == 0) {
				printf("第 %d 位,踢出 %d\n",c,*i);
				i = v.erase(i);
				c++;
			} else i++;
			cnt = (cnt+1)%3;
		}
	}
	printf("最後報數 %d\n", v[0]);
}
