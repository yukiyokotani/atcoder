#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

ll mod_pow(ll a, ll n, ll m = MOD) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % m;
    a = a * a % m;
    n >>= 1;
  }
  return res;
}

int mod_comb(ll n, ll r, int m = MOD) {
  ll x = 1, y = 1;
  rep(i, r) {
    x = x * (n - i) % m;
    y = y * (r - i) % m;
  }
  //   cout << x << ' ' << y << ' ' << x / y << endl;
  return x * mod_pow(y, MOD - 2) % MOD;
}

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll ans = mod_pow(2, n) - 1;
  ans = (ans - mod_comb(n, a) + MOD) % MOD;
  ans = (ans - mod_comb(n, b) + MOD) % MOD;
  cout << ans << endl;
}