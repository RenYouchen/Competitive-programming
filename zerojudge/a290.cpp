#include <bits/stdc++.h>

using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
bool see = false;
int search(Graph &G,int a,int b) {
	seen[a] = true;
	if(a == b || see == true) {
		see = true;
		return 0;
	}
	for(auto i : G[a]) {
		if(seen[i]) continue;
		search(G,i,b);
	}

	return 0;
}

int bfs(Graph &G,int a, int b) {
	seen[a] = true;
	queue<int> todo;
	todo.push(a);

	while(!todo.empty()) {
		int v = todo.front();
		todo.pop();
		if(v == b || see == true) {
			see = true;
			return 0;
		}

		for(auto i : G[v]) {
			if(seen[i]) continue;
			seen[i] = true;
			todo.push(i);
		}
	}
	return 0;
}

int main() {
	int n,m;
	while(cin >> n >> m) {
		see = false;
		seen.assign(n,false);
		int A,B;
		Graph G(n + 1);
		for(int i = 0; i < m; i++) {
			int a,b;
			cin >> a >> b;
			G[a].push_back(b);
		}
		cin >> A >> B;
		//	for(auto &i : G) {
		//		cout << find(G.begin(),G.end(),i) - G.begin() << '\t';
		//		for(auto &j : i) {
		//			cout << j << " ";
		//		}
		//		cout << '\n';
		//	}
		bfs(G,A,B);

		if(see) {
			cout << "Yes!!!\n";
		} else {
			cout << "No!!!\n";
		}
	}
}
