#include <bits/stdc++.h>

using namespace std;

int main() {
	int m,n,k;
	int ks[100];
	string d[20];
	int ans[200] = { 0 };
	cin >> m >> n >> k;
	
	for(int i = 0; i < m; i++) {
		cin >> d[i];
	}
	for(int i = 0; i < k; i++) {
		cin >> ks[i];
	}
	int x = m-1, y = 0;
	for(int i = 0; i < k; i++) {
		switch(ks[i]) {
			case 0: 
				if(x-1!=-1) {
					x--;
				}
				break;
			case 1:
				if(y+1!=n) {
					y++;
				}
				break;
			case 2:
				if(y+1!=n && x+1 != m){
					y++;x++;
				}
				break;
			case 3:
				if(x+1!=m) {
					x++;
				}
				break;
			case 4:
				if(y-1!=-1) {
					y--;
				}
				break;
			case 5:
				if(y-1!=-1 && x-1!=-1) {
					y--;x--;
				}
				break;
			default:
				break;
		}
		ans[d[x][y]]++;
		cout << d[x][y];
	}
	cout << '\n';
	int count = 0;
	for(auto i:ans) {
		if(i>0) {
			count++;
		}
	}
	cout << count << '\n';
}
