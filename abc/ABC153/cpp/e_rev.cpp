#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1E9 + 9;
const int INF = 1<<29; 

int main(){
    int H, N;
    cin >> H >> N;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i] >> B[i];

    vector<vector<int> > dp(N + 1, vector<int>(H + 10000, INF));
    dp[0][0] = 0;
    rep(i, N){
        rep(j, H + 10000){
            dp[i + 1][j] = min(dp[i][j], dp[i + 1][j - A[i]] + B[i]);
        }
    }

    int ans = INF;
    for(int j = H; j < H + 10000; j++){
        ans = min(ans, dp[N][j]);
    }
    cout << ans << endl;
    return 0;
}