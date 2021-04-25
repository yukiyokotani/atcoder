//最小個数部分和

#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1E9 + 9;
const int INF = 1<<29; 

int main(){
    int N, K, A;
    cin >> N >> K >> A;

    vector<int> a(N);
    rep(i, N) cin >> a[i];

    int dp[101][10001];
    rep(i, 101) rep(j, 10001) dp[i][j] = INF;
    dp[0][0] = 0;

    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= A; j++){
            dp[i+1][j] = dp[i][j];
            if (j >= a[i]) dp[i+1][j] = min(dp[i][j-a[i]]+1, dp[i][j]);
        }
    }
    if (dp[N][A] <= K) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}