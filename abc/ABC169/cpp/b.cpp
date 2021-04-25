#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

int main() {
  int n;
  cin >> n;
  ll max = 1e18;
  ll a, ans = 1;
  bool ng = false;
  rep(i, n) {
    cin >> a;
    if (a == 0) {
      cout << 0 << endl;
      return 0;
    }
    if (ng || max / ans < a) {
      ng = true;
    }
    ans *= a;
  }
  if (ng || ans > max)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}