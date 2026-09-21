#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N+1);
	vector<int> leaf;
	vector<int> height(N+1);
	for(int i = 1; i <= N; i++) {
		int c;
		cin >> c;
		if(c==0) leaf.push_back(i);
		for(int j = 0; j < c; j++) {
			int input;
			cin >> input;
			A[input] = i;
		}
	}
	// for(int i = 1; i <= N; i++) {
	// 	cout << "Index:" << i << " ";
	// 	for(int j = 0; j < A[i].size(); j++) {
	// 		cout << A[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	for(int i = 1; i <= N; i++) {
		if(A[i] == 0) {
			cout << i << endl;
			break;
		}
	}

	for(auto i : leaf) {
		int currentNode = i;
		int currentHeight = 0;
		while(currentNode != 0) {
			height[currentNode] = max(height[currentNode], currentHeight);
			currentNode = A[currentNode];
			currentHeight++;
		}
	}
	int long long count = 0;
	for(auto i : height) count += i;
	cout << count << endl;
}
