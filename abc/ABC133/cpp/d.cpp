#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    ll x2 = 0;
    rep(i,n){
        if (i%2) x2 -= a[i];
        else x2 += a[i];
    }
    vector<int> ans(n);
    ans[0] = x2/2;
    rep(i,n+1){
        ans[i+1] = a[i]-ans[i];
    }
    rep(i,n) ans[i] *= 2;
    rep(i,n) printf("%d%c", ans[i], i==n-1?'\n':' ');
    return 0;
}