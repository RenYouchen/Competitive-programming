#include <bits/stdc++.h> 
using namespace std;

int main() {
	int N;
	cin >> N;
	int A[50000];
	for(int i = 0; i < N; i++) {	
		cin >> A[i];
	}
	int count = 0;
	for(int i = 0; i < N; i++) {
		if(A[i] == -1) continue;
		int currentNode = i;
		while(true) {
			int temp = A[currentNode];
			if(A[currentNode] == -1) {
				count++;
				break;
			}
			A[currentNode] = -1;
			currentNode = temp;
		}
	}
	cout << count << '\n';
}
