#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	int CAP = 100;
	while(cin >> N) {
		vector<int> value;
		vector<int> size;
		for(int i = 0; i < N; i++) {
			int v, s;
			cin >> s >> v;
			value.push_back(v);
			size.push_back(s);
		}
		vector<vector<int>> dp;
		int row = size.size() + 1;
		int col = CAP + 1;
		dp.resize(row, vector<int>(col, 0));
		
		for(int i = 0; i < row; i++) {
			for(int j = 0; j < col; j++) {
				if(i==0||j==0) {
					dp[i][j] = 0;
				} else if(size[i-1] > j) {
					dp[i][j] = dp[i-1][j];
				} else {
					int include_item = value[i-1] + dp[i-1][j-size[i-1]];
					int exclude_item = dp[i-1][j];
					dp[i][j] = max(include_item, exclude_item);
				}

			}
		}


		cout << dp[row-1][CAP] << endl;
			

	}
}
