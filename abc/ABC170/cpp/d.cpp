#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  //   rep(i, n) cout << a[i] << ' ';
  //   cout << endl;
  int ans = 1;
  if (a[0] == a[1]) {
    ans = 0;
  };
  bool flag = false;
  for (int i = 1; i < n; i++) {
    // cout << "start " << a[i] << endl;
    flag = false;
    for (int j = 0; j < i; j++) {
      if (a[i] % a[j] == 0) {
        flag = true;
        continue;
      }
    }
    if (!flag) ans++;
  }
  cout << ans << endl;
  return 0;
}