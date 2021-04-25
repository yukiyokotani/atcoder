//最小個数部分和

#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1E9 + 9;
const int INF = 1<<29; 

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int A;
    cin >> A;

    int dp[110][10000];
    rep(i, 10) rep(j, 100000) dp[i][j] = INF;
    dp[0][0] = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= A; j++){
            dp[i+1][j] = dp[i][j];
            if (j >= a[i]) dp[i+1][j] = min(dp[i][j-a[i]] + 1, dp[i][j]);
        }
    }

    if (dp[n][A] < INF) cout << dp[n][A] << endl;
    else cout << -1 << endl;
    return 0;
}