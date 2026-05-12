#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int n[3];
	for(int i = 0; i < 3; i++) {
		cin >> n[i];
	}
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3-i-1; j++) {
			if(n[j] > n[j+1]) swap(n[j],n[j+1]);
		}
	}
	for(int i = 0; i < 3; i++) {cout << tos(n[i]) + " ";}
	cout << endl;
}
