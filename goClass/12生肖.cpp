#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
    string s = "鼠牛虎兔龍蛇馬羊猴雞狗豬";
    int y;
    cin >> y;
    int ans = (y-97)%12;
	if(ans < 0) ans = ans+12;
    cout << "民國" + tos(y) + "屬" << s.substr(ans*3,3) << endl;
}
