#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	vector<vector<int> > v;
	int count = 0;
	//read data
	for(int i = 0; i < n; i++) {
		vector<int> t;
		v.push_back(t);
		for(int j = 0; j < m; j++) {
			
			int a; cin >> a;
			v[i].push_back(a);
		}
	}
	for(int f = 0; f < n*m; f++) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				int num = v[i][j];
				if(num == -1) continue;
				if(i + 1 < n) {
					int x = i+1;
					while(x < n && v[x][j] == -1) x++;
					if(x < n && v[x][j] == num) {
						count+=v[x][j];
						v[x][j] = -1;
						v[i][j] = -1;
						continue;
					}
				}
				if(j+1 < m) {
					int y = j+1;
					while(v[i][y] == -1 && y < m) y++;
					if(y < m &&v[i][y] == num) {
						count+=v[i][y];
						v[i][y] = -1;
						v[i][j] = -1;
						continue;
					}
				}
			}
		}
	}
	cout << count;
}
