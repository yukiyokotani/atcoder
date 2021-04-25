// N以下の整数でひとつでも3を含むものの数

#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int dp[10000];
    dp[0] = 0;

    rep(i, n){
        dp[i+1] = max(dp[i], dp[i]+a[i]);
    }

    cout << dp[n] << endl;
    return 0;
}