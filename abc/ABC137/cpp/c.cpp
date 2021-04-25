#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
// const int MOD = 1E9 + 9;
// const int INF = 1<<29; 

int main(){
    int64_t ans = 0;
    int N;
    cin >> N;
    vector<string> s(N);
    rep(i, N) cin >> s[i];
    map<string, int> cnt;
    rep(i, N){
        sort(s[i].begin(), s[i].end()); 
        cnt[s[i]]++;
        // cout << s[i] << ' ' << cnt[s[i]] << endl;
    }
    for(int i = 0; i < N; i++){
        // cout << cnt[s[i]] << endl;
        ans += cnt[s[i]] - 1;
    }
    // nC2にするために2で割っている。すでに上で(N-1)をN回足し合わせている。
    // nC2 = N*(N-1)/2
    cout << ans / 2 << endl;
}
