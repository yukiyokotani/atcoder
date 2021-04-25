#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

int main() {
  ll a;
  double b;
  cin >> a >> b;
  ll ib = b * 100 + 0.5;
  ll ans = a * ib / 100;
  cout << ans << endl;
  return 0;
}