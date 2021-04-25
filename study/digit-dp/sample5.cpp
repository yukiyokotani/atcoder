#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int N, W;
    cin >> N >> W;
    vector<int> v(N), w(N);
    rep(i, N) cin >> v[i] >> w[i];

    // dp[ 確認した品物のindex ][ その時点での重さ ]
    long long dp[100][10001];
    // dp[0][0] = 0;

    rep(i, N){
        for(int j = 0; j <= W; j++){
            // wiがW以下の場合は詰められる。
            // とりあえず詰めて残りスペースを最適化した場合を考えて、入れるか入れないか判断。
            if (j >= w[i]) dp[i+1][j] = max(dp[i][j - w[i]] + v[i], dp[i][j]);
            // wiがWを超えていた場合、そもそも詰められない
            else dp[i+1][j] = dp[i][j];
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}