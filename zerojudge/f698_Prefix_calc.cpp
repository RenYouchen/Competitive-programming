#include <bits/stdc++.h> 
using namespace std;

int main() {
	string s;
	while(getline(cin, s)) {
		stringstream ss(s);
		string token;
		stack<int> st;
		while(ss >> token) {

			if(token.length() == 1 && !isdigit(token[0])) {
				int a = st.top(); st.pop();
				int b = st.top(); st.pop();
				if(token == "+") st.push(a+b);
				else if(token == "-") st.push(b-a);
				else if(token == "*") st.push(b*a);
				else if(token == "/") st.push(b/a);
			} else {
				st.push(stoi(token));
			}
		}
		cout << st.top() << '\n';
	}

}
