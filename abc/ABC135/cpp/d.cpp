#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1E9 + 7;

// //この位置で定義しないとWAになる・・・
// long long dp[100001][13];

int main(){
    string S;
    cin >> S;
    long long dp[100001][13];
    dp[0][0] = 1;

    rep(i, S.size()){
        rep(j, 10){
            int D = S[i] - '0';
            if(S[i] == '?' || D == j){
                rep(k, 13){
                    dp[i + 1][(k * 10 + j) % 13] += dp[i][k];
                    dp[i + 1][(k * 10 + j) % 13] %= MOD;
                }
            }
        }
    }
    cout << dp[S.size()][5] << endl;
}
