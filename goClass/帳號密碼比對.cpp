#include <bits/stdc++.h>
#define correct "正確"
#define wrong "錯誤"
using namespace std;

int main() {
	string a,b;
	cin >> a >> b;
	a = (a == "admin") ? correct : wrong;
	b = (b == "1234") ? correct : wrong;
	cout << "賬號"+a+",密碼"+b << endl;
	if(a == "正確" && a==b){
		cout << "認證成功" << endl;
	} else {
		cout << "認證失敗" << endl;
	}
}
