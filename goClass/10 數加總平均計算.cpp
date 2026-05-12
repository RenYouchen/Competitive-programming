#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
	vector<double> v;
	int n = 10;
	double sum = 0;
	while(n--) {
		double a;
		cin >> a;
		sum += a;
		v.push_back(a);
	}
	for(int i = 0; i < 10; i++) {
		printf("%g",v[i]);
		if(i != 9) cout << " ";
	}
	printf("Sum = %g\n",sum);
	printf("Average = %.2f\n",sum/10);

}
