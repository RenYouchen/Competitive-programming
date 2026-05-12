#include <bits/stdc++.h>
using namespace std;

vector<int> ts; //TYPE AND STATUS
vector<int> seen;
vector<pair<int,int>> dp; // pair<status,dist>
vector<vector<int>> graph;

vector<pair<int,int>> ans;

pair<int,int> dfs(int node);

int p,q,r,m;
int main() {
	cin >> p >> q >> r >> m;
	
	ts.assign(p+q+1,0);
	graph.assign(p+q+r+1,{});
	seen.assign(p+q+r+1,0);
	dp.resize(p+q+r+1);

	for(int i = 1; i <= p+q; i++) { // (1,p+q]
		cin >> ts[i];
	}

	int a,b;
	for(int i = 0; i < m; i++) { //read graph
		cin >> a >> b;
		graph[b].push_back(a);
	}
	
	for(int i = p+q+1; i <= p+q+r; i++) {
		ans.push_back(dfs(i));
	}
	int _max = -1;
	for(auto i : ans) {
		if(i.second > _max) _max = i.second;
	}
	cout << _max << '\n'; 
	for(auto i : ans) {
		cout << i.first << ' ';
	}
}

pair<int,int> dfs(int node) {
	if(node <= p) { //is input
		seen[node] = 1;
		return dp[node] = {ts[node],0};
	}	
	if(node > p+q && node <= p+q+r) { //is output
		return dp[node] = dfs(graph[node][0]);
	}
	if(seen[node]) {
		return dp[node];
	}

	seen[node] = 1;

	auto x = dfs(graph[node][0]);

	if(ts[node] == 4) {
		return dp[node] = {!x.first, x.second+1};
	}

	auto y = dfs(graph[node][1]);

	if(ts[node] == 1) 
		return dp[node] = {x.first && y.first, max(x.second,y.second) + 1};
	if(ts[node] == 2) 
		return dp[node] = {x.first || y.first, max(x.second,y.second) + 1};
	if(ts[node] == 3) 
		return dp[node] = {x.first ^ y.first, max(x.second,y.second) + 1};

}
