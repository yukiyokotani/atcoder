#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 9;
const int INF = 1 << 29;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  int ans = INF;
  rep(i, n) cin >> t[i];
  for (int i = 0; i < (1 << n); ++i) {
    int p1 = 0, p2 = 0;
    for (int j = 0; j < n; ++j) {
      if (i & (1 << j)) {
        p1 += t[j];
      } else {
        p2 += t[j];
      }
    }
    ans = min(ans, max(p1, p2));
  }
  cout << ans << endl;
  return 0;
}