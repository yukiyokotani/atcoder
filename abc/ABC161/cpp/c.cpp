#include <algorithm>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 9;
const int INF = 1 << 29;

ll rec(ll x, ll k) {
  ll abs_diff = abs(x - k);
  if (abs_diff >= x) return x;
  return rec(abs_diff, k);
}

int main() {
  ll N, K;
  cin >> N >> K;
  ll ans = rec(N % K, K);
  cout << ans << endl;
}