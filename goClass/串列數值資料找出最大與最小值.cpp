#include <string>
#include <iostream>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	string s;
	int max = -100, min = 100;
	cout << "內容是";
	while(cin >> s && s != "end") {
		int num = atoi(s.cs);
		if(num > max) max = num;
		if(num < min) min = num;
		cout << ' ' << num;
	}
	printf(", 最大值是 %d, 最小值是 %d\n", max,min);
}
