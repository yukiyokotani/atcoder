#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

ll gcd(ll a, ll b) {
  if (a % b == 0) {
    return (b);
  } else {
    return (gcd(b, a % b));
  }
}

int main() {
  ll K;
  cin >> K;
  ll ans = 0;
  rep(i, K) {
    rep(j, K) {
      rep(k, K) { ans += gcd(i, gcd(j, k)); }
    }
  }
}