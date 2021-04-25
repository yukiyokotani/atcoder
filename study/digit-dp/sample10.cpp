#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main(){
    int N, W;
    cin >> N >> W;
    vector<int> v(N), w(N);
    rep(i, N) cin >> v[i] >> w[i];
    int64_t dp[101][10001];
    // int dp[101][1001];

    for(int i = 0; i < N; i++){
        for(int j = 0; j <= W; j++){
            if(w[i] <= j){
                dp[i + 1][j] = max((dp[i][j - w[i]] + v[i]), dp[i][j]);
                // cout << "True dp[i+1][j] = " << dp[i + 1][j] << endl;
            }
            else{
                dp[i + 1][j] = dp[i][j];
                // cout << "False dp[i+1][j] = " << dp[i + 1][j] << endl;
            }
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}