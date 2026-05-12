#include <bits/stdc++.h>

#define F first
#define S second

using namespace std;

int main() {
	int n, m;
	vector<vector<int> > v(n, vector<int>(m));

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			int a; cin >> a;
			v[i][j] = a;
		}
	}

	int count;
	vector<pair<int,int> > ans;
	

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			int x = v[i][j];
			int w,h;
			w = h = x * 2;
			int startx = i-x;
			int starty = j-x;
			
			if(startx < 0) startx = 0;
			if(starty < 0) starty = 0;
			if(startx+w > n) w = n - startx;
			if(starty+h > m) h = m - starty;
			
			for(int o = 0; o < w; o++) {
				for(int p = 0; p < h; p++) {
					if((abs(i - o) + abs(j - p)) % 10 == x) printf("%d %d\n",o,p);
				}
			}
		}
	}
}	
