#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> ans(n, 0);
  int l;
  for (int i = 1; i < n; i++) {
    for (int j = i + 1; j <= n; j++) {
      l = min(abs(j - i), abs(x - i) + abs(j - y) + 1);
      ans[l]++;
    }
  }
  for (int i = 1; i < n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}