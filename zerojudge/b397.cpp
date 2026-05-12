#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> dp;
string a, b;
vector<string> result;

int c;
map<pair<int,int>, set<string>> memo;

set<string> backtrack(int i, int j) {
	if (i == 0 || j == 0) return {""};

	if (memo.count({i,j})) return memo[{i,j}];

	set<string> res;
	if (a[i-1] == b[j-1]) {
		auto prev = backtrack(i-1, j-1);
		for (auto &s : prev) res.insert(s + a[i-1]);
	} else {
		if (dp[i-1][j] >= dp[i][j-1]) {
			auto prev = backtrack(i-1, j);
			res.insert(prev.begin(), prev.end());
		}
		if (dp[i][j-1] >= dp[i-1][j]) {
			auto prev = backtrack(i, j-1);
			res.insert(prev.begin(), prev.end());
		}
	}
	return memo[{i,j}] = res;
}


/*
   void backtrack(int i, int j, string cur) {
   if(i == 0 || j == 0) {
   reverse(cur.begin(), cur.end());
   result.push_back(cur);
   return;
   }	

   if(a[i-1] == b[j-1]) {
   backtrack(i-1, j-1, cur+a[i-1]);
   } else if(dp[i-1][j] > dp[i][j-1]) {
   backtrack(i-1, j, cur);
   } else if(dp[i-1][j] < dp[i][j-1]) {
   backtrack(i, j-1, cur);
   } else {
   backtrack(i, j-1, cur);
   backtrack(i-1, j, cur);
   }
   }
   */



int main() {
	int N;
	c = 0;
	cin >> N;
	while(N--) {
		c++;
		result.clear();
		cin >> a >> b;
		dp.assign(a.size()+1, vector<int>(b.size()+1, 0));
		for(int i = 1; i < a.size() + 1; i++) {
			for(int j = 1; j < b.size() + 1; j++) {
				if(a[i-1] == b[j-1]) {
					dp[i][j] = dp[i-1][j-1] + 1;
				} else {
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				}
			}
		}
		/*
		   backtrack(a.size(), b.size(), "");
		   sort(result.begin(), result.end());
		   result.erase(unique(result.begin(), result.end()), result.end());
		   cout << "Case #" << c << ": " << result.size() << endl;
		   for(auto i: result) {
		   cout << i << endl;
		   }
		   */
		memo.clear();

		auto ans = backtrack(a.size(), b.size());

		for (auto &i : memo) {
			cout << i.first.first << " " << i.first.second << " {";
			for (auto &s : i.second) {
				cout << s << " ";
			}
			cout << "}" << endl;
		}


		cout << "Case #" << c << ": " << ans.size() << endl;
		for (auto &s : ans) cout << s << endl;

	}
}


