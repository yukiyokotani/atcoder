#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  int n;
  cin >> n;
  vector<int> a(n, 0);
  for (int i = 1; i < n; i++) cin >> a[i];
  vector<int> ans(n);
  for (int i = 1; i < n; i++) ans[a[i] - 1]++;
  rep(i, n) { cout << ans[i] << endl; }
  return 0;
}