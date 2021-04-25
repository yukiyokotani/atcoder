#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  sort(p.begin(), p.end());
  int ans = 0;
  rep(i, k) ans += p[i];
  cout << ans << endl;
  return 0;
}