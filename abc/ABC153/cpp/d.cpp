#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
const int MOD = 1E9 + 9;
const int INF = 1<<29; 

// 整数型なので勝手に切り捨てられる
long long f(long long x){
    if(x == 1) return 1;
    return f(x/2) * 2 + 1;
}

int main(){
    long long H;
    cin >> H;
    cout << f(H) << endl;
    return 0;
}