#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

struct mint {
  ll x;  // typedef long long ll;
  mint(ll x = 0) : x((x % MOD + MOD) % MOD) {}
  mint operator-() const { return mint(-x); }
  mint& operator+=(const mint a) {
    if ((x += a.x) >= MOD) x -= MOD;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += MOD - a.x) >= MOD) x -= MOD;
    return *this;
  }
  mint& operator*=(const mint a) {
    (x *= a.x) %= MOD;
    return *this;
  }
  mint operator+(const mint a) const {
    mint res(*this);
    return res += a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res -= a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res *= a;
  }
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t >> 1);
    a *= a;
    if (t & 1) a *= *this;
    return a;
  }

  // for prime MOD
  mint inv() const { return pow(MOD - 2); }
  mint& operator/=(const mint a) { return (*this) *= a.inv(); }
  mint operator/(const mint a) const {
    mint res(*this);
    return res /= a;
  }
};

mint f(int n) {
  if (n == 0) return 1;
  mint x = f(n / 2);
  x *= x;
  if (n % 2 == 1) x *= 2;
  return x;
}

mint choose(int n, int a) {
  mint x = 1, y = 1;
  rep(i, a) {
    x *= n - i;
    y *= i + 1;
  }
  return x / y;
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  mint ans;
  ans = f(n) - 1;
  ans -= choose(n, a);
  ans -= choose(n, b);
  cout << ans.x << endl;
  return 0;
}