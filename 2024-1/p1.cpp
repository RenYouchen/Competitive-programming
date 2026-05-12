#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second

int main() {
	int n;
	cin >> n;
	pair<int,pair<int,int>> d[20];
	for(int i = 0; i < n; i++) {
		int a,b;
		cin >> a >> b;
		d[i].f = a*a + b*b;
		d[i].s.f = a;
		d[i].s.s = b;
	}

	sort(d,d+n,[](const pair<int,pair<int,int>>& a, const pair<int,pair<int,int>>& b){
		return a.f > b.f;
	});
	cout << d[1].s.f << " " << d[1].s.s << '\n';
}
