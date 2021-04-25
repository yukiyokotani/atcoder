// N以下の整数でひとつでも3を含むものの数

#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

long long dp[32][2][2];
// dp[ 決めた桁数 ][ 未満フラグ ][ 3が出たか ] := 総数

long long solve(const string &S){
    const int L = S.size();
    // L = Sの桁数
    dp[0][0][0] = 1;
    // 
    for(int i = 0; i < L; i++){
        const int D = S[i] - '0';
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                    for(int d = 0; d <= (j ? 9 : D); d++){
                        dp[i + 1][j || (d < D)][k || (d == 3 || d == 2)] += dp[i][j][k];
                    }
            }
        }
    }
    return dp[L][0][1] + dp[L][1][1];
}

int main(){
    long long S;
    cin >> S;
    cout << solve(to_string(S)) << endl;

    return 0;
}