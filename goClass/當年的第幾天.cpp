#include <bits/stdc++.h>

using namespace std;

int main() {
	struct tm date,comp;
	struct tm *pcomp;
	time_t temp;
	string s;
	int day,month,year;

	cin >> year >> month >> day;
	memset(&date,0,sizeof(date));
	//getline(cin, s);
	//strptime(s.c_str(), "%Y %m %d", &date);
	
	//printf("%d %d %d\n",day,month,year);
	//cout << "str: " << s << endl;
	date.tm_mday = day, date.tm_mon = month - 1, date.tm_year = year - 1900;
	temp = mktime(&date);
	//cout << "mktime: " << temp << endl;
	pcomp = localtime(&temp);
	comp = *pcomp;
	if(day == comp.tm_mday && month == comp.tm_mon+1 && year == comp.tm_year + 1900) {
		cout << date.tm_yday + 1<< endl;
	} else {
		cout << "error" << endl;
	}
	//printf("%d %d %d\n",comp.tm_mday,comp.tm_mon +1, comp.tm_year + 1900);
}

