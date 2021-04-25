#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1E9 + 7;

// dpの定義位置
long long dp[100001][13];

int main(){
    string S;
    cin >> S;
    dp[0][0] = 1;

    rep(i, S.size()){
        if(S[i] == '?'){
            rep(j, 10){
                rep(k, 13){
                    // 上の桁の余りが0~12のすべての場合について計算
                    dp[i + 1][(k * 10 + j) % 13] += dp[i][k];
                    dp[i + 1][(k * 10 + j) % 13] %= MOD;
                }
            }
        }

        else{
            int D = S[i] - '0';
            rep(k, 13){
                // 上の桁の余りが0~12のすべての場合について計算
                dp[i + 1][(k * 10 + D) % 13] += dp[i][k];
                dp[i + 1][(k * 10 + D) % 13] %= MOD;
            }
        }
    }
    cout << dp[S.size()][5] << endl;
}