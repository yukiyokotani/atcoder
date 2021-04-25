#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<int> w(n), v(n), x(m);
  rep(i, n) cin >> w[i] >> v[i];
  rep(i, m) cin >> x[i];
  rep(qi, q){
    int l, r;
    cin >> l >> r;
    l--; r--;
    vector<int> as;
    rep(i, m) if(i < l || r < i) as.push_back(x[i]);
    sort(as.begin(), as.end());
    vector<bool> used(n);
    int ans = 0;
    for(int a : as){
      P best(-1, -1);
      rep(i, n){
        if(a < w[i]) continue;
        if(used[i]) continue;
        best = max(best, P(v[i], i));
      }
      int i = best.second;
      if(i == -1) continue;
      used[i] = true;
      ans += best.first;
    }
    cout << ans << endl;
  }
}