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
  vector<bool> sieve(a[n - 1], true);
  int prev = -1;
  rep(i, n) {
    if (prev == a[i]) {
      sieve[a[i]] = false;
      continue;
    };
    int tmp = 2 * a[i];
    while (tmp <= a[n - 1]) {
      sieve[tmp] = false;
      tmp += a[i];
    }
    prev = a[i];
  }
  int cnt = 0;
  rep(i, n) {
    // cout << a[i] << ' ' << sieve[a[i]] << endl;
    if (sieve[a[i]]) cnt++;
  }
  cout << cnt << endl;
  return 0;
}