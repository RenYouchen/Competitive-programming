#include <bits/stdc++.h>
using namespace std;

int main() {
	double a,b;
	cin >> a >> b;
	double ans = 0;
	if(abs(a - b) > 5) {
		ans = a*b;
		cout << ans;
		if(ans>100) cout << ",100+\n";
	} else if(a == b) {
		ans = a*2*sqrt(7);
		printf("%.2f\n",ans);
	} else {
		ans = a/b;
		//std::cout << std::fixed << std::setprecision(16);
		//cout << ans;
		printf("%.16f",ans);
		if((int)ans!=ans) cout << ",有小數\n";
	} 
}
