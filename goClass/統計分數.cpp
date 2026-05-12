#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	int total = 0,
		Max = -100000,
		Min = 100000,
		n = 0,
		count = 0;
	double avg;
	while(true) {
		string s; cin >> s;
		if(s == "stop") break;
		int num = atoi(s.cs);
		total += num;
		count++;
		if(num < 60) n++;
		if(num > Max) Max = num;
		if(num < Min) Min = num;
	}
	avg = (double)total/count;
	printf("總分：%d 分，平均：%.2f 分\n不及格人數：%d 人\n最高分：%d 分，最低分：%d 分\n",total,avg,n,Max,Min);

}
