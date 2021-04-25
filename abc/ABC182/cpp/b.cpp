#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1<<29; 

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int max_a = 0;
    rep(i, n) {
        cin >> a[i];
        max_a = max(max_a, a[i]);
    };
    int max_gcd = 0;
    int ans;
    rep(i, max_a){
        if(i == 0) continue;
        int gcd = 0;
        rep(j, n){
            if(a[j] % (i + 1) == 0) gcd++;
        }
        if(gcd > max_gcd){
            max_gcd = gcd;
            ans = i + 1;
        }
    }
    cout << ans << endl;
    return 0;
}