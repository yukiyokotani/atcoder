#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int t = 1;
  vector<ll> memo(n, -1);
  vector<bool> reach(n, false);
  int cnt = 0;
  int min;
  rep(i, n) {
    if (reach[t - 1]) {
      //   cout << cnt << "回目に到達した" << t << "は" << memo[t - 1]
      //        << "回目にも到達している。" << endl;
      cnt -= memo[t - 1];
      min = memo[t - 1];
      break;
    };
    reach[t - 1] = true;
    
    memo[t - 1] = cnt;
    t = a[t - 1];
    cnt++;
  }
  //   cout << min << "回目から" << cnt << "回でループする" << endl;
  t = 1;
  if (k >= (min + cnt)) k = min + ((k - min) % cnt);
  rep(i, k) { t = a[t - 1]; }
  cout << t << endl;
}