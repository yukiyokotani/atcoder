#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i] >> B[i];

    // dp[ 残り日数 ] = 報酬の最大値
    long long dp[100001];
    dp[0] = 0;

    for(int i = 1; i <= M; i++){
        int reset = -1;
        for(int j = 0; j <  N; j++){
            if(A[j] <= i){
                dp[i] = max(dp[i - 1] + B[j], dp[i]);
                if(dp[i - 1] + B[j] >= dp[i]) reset = j;
            }
            // cout << reset << ". " << i << "  days leave. Work "  << j << " has been checked. Max gain is " << dp[i] << endl;
        }
        B[reset] = 0;
        // cout << endl;
    }
    cout << dp[M] << endl;
}