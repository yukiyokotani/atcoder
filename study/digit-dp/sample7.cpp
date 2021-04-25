//部分和数え上げ

#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1E9 + 9;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    int A;
    cin >> A;

    int dp[110][10000];
    dp[0][0] = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= A; j++){
            dp[i+1][j] += dp[i][j];
            if (j >= a[i]) dp[i+1][j] += dp[i][j-a[i]] %= MOD;
        }
    }

    cout << dp[n][A] << endl;
    return 0;
}