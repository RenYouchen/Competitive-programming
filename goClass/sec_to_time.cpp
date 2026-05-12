#include <bits/stdc++.h>
#define cs c_str()
#define tos(x) to_string(x)
using namespace std;

int main() {
    int a;
    cin >> a;
    int hr = a/3600,
        min = a%3600/60,
        sec = a%60;
    cout << a << "秒可轉換為===>" 
    << (hr==0?"":tos(hr)+"小時")
    << (min==0?"":tos(min)+"分")
    << (sec==0?"":tos(sec)+"秒");
}
