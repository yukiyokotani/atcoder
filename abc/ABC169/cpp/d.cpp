#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

// Sieve of Eratosthenes
// https://youtu.be/UTVg7wzMWQc?t=2774
struct Sieve {
  int n;
  vector<int> f, primes;
  Sieve(int n = 1) : n(n), f(n + 1) {
    f[0] = f[1] = -1;
    for (ll i = 2; i <= n; ++i) {
      if (f[i]) continue;
      primes.push_back(i);
      f[i] = i;
      for (ll j = i * i; j <= n; j += i) {
        if (!f[j]) f[j] = i;
      }
    }
  }
  bool isPrime(int x) { return f[x] == x; }
  vector<int> factorList(int x) {
    vector<int> res;
    while (x != 1) {
      res.push_back(f[x]);
      x /= f[x];
    }
    return res;
  }
  vector<P> factor(int x) {
    vector<int> fl = factorList(x);
    if (fl.size() == 0) return {};
    vector<P> res(1, P(fl[0], 0));
    for (int p : fl) {
      if (res.back().first == p) {
        res.back().second++;
      } else {
        res.emplace_back(p, 1);
      }
    }
    return res;
  }
  vector<pair<ll, int>> factor(ll x) {
    vector<pair<ll, int>> res;
    for (int p : primes) {
      int y = 0;
      while (x % p == 0) x /= p, ++y;
      if (y != 0) res.emplace_back(p, y);
    }
    if (x != 1) res.emplace_back(x, 1);
    return res;
  }
};

int main() {
  ll n;
  cin >> n;

  Sieve s(1000005);
  auto fs = s.factor(n);

  int ans = 0;
  for (auto p : fs) {
    int x = p.second;
    int b = 1;
    while (b <= x) {
      x -= b;
      b++;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}