#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1<<29; 

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> sum_a(n + 1), sum_b(m + 1);
    sum_a[0] = 0;
    sum_b[0] = 0;
    int a, b;
    rep(i, n) {
        cin >> a;
        sum_a[i+1] = sum_a[i] + a;
    };
    rep(i, m) {
        cin >> b;
        sum_b[i+1] = sum_b[i] + b;
    };
    int ans = 0;
    int max_j = m;
    rep(i, n + 1){
        if(sum_a[i] > k) break;
        int j = max_j;
        while(k - sum_a[i] < sum_b[j]){
            j--;
        }
        ans = max(ans, i + j);
        max_j = min(j, max_j);
    }
    cout << ans << endl;
    return 0;
}