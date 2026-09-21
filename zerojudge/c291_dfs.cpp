#include <bits/stdc++.h> 
using namespace std;

void dfs(int node, int* count);
int A[50000];
int main() {
	int N;
	cin >> N;
	for(int i = 0; i < N; i++) {	
		cin >> A[i];
	}
	int count = 0;
	for(int i = 0; i < N; i++) {
		if(A[i] == -1) continue;
		dfs(i, &count);	
	}
	cout << count << '\n';
}

void dfs(int node, int* count) {
	if(A[node] == -1) {
		(*count)++;
		return;
	}
	int temp = A[node];
	A[node] = -1;
	dfs(temp, count);
}
