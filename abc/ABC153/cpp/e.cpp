#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1E9 + 9;
const int INF = 1<<29; 

int main(){
    int H, N;
    cin >> H >> N;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i] >> B[i];
    int dp[101][1001];
    rep (h, H) dp[0][h] = INF;

    for(int i = 0; i < N; i++){
        for(int h = 0; h <= H; h++){
            if(h >= A[i]){
                dp[i+1][h] = min(dp[i][h-A[i]] + B[i], dp[i][h]);
            }else{
                dp[i+1][h] = dp[i][h];
            }
        }
    }
    cout << dp[N+1][H+1] << endl;
}