#include <bits/stdc++.h>
using namespace std;

int getWeight(char c);

int main() {
	string s;
	while(getline(cin, s)) {
		stack<char> st;
		string ans = "";
		for(auto i : s) {
			if(i == ' ') continue;
			if(isalpha(i)) {
				ans += i;
			} else {
				if(i == ')') {
					while(!st.empty()) {
						if(st.top() == '(') {
							st.pop();
							break;
						}
						ans += st.top();
						st.pop();
					}	
				} else if(i == '(') {
					st.push(i);
				} else {
					if(st.empty()) st.push(i);
					else {
						//st is not empty
						if(getWeight(i) <= getWeight(st.top())) {
							while(!st.empty() && getWeight(i) <= getWeight(st.top())) {
								if(st.top() == '(') break;
								ans += st.top();
								st.pop();
							}
						}
						st.push(i);
					}
				}
			}
		}
		while(!st.empty()) {
			// if(st.top() == ')') {
			// 	st.pop();
			// 	continue;
			// }
			ans += st.top(); st.pop();
		}
		for(auto i : ans) {
			cout << i << " ";
		}
		cout << endl;
	}	
}

int getWeight(char i) {
	int w = (i == '*' || i == '/') ? 2 : (i == '+' || i == '-') ? 1 : 0;
	return w;
}
