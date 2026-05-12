#include <bits/stdc++.h>

using namespace std;


int main() {
	string a,b;

	cin >> a >> b;
	int row = a.size() + 1;
	int col = b.size() + 1;

	vector<vector<int>> dp;
	dp.resize(row, vector<int>(col, 0));

	for(int i = 1; i < row; i++) {
		for(int j = 1; j < col; j++) {
			if(a[i-1] == b[j-1]) {
				dp[i][j] = dp[i-1][j-1]+1;
			} else {
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	//cout << dp[row-1][col-1] << endl;
	string s = "";
	row--;
	col--;
	while(row && col) {
		if(a[row-1] == b[col-1]) {
			s+= a[row-1];
			row--;
			col--;
		} else {
			if(dp[row][col-1] > dp[row-1][col]) {
				col--;
			} else {
				row--;
			}
		}
	}	
	if(s.empty()) {
		cout << "E" << endl;
	} else {
		reverse(s.begin(), s.end());
		cout << s.size() << endl;
	}
}
